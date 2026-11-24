"""Reference results from gdb's instruction-set simulators (sim/*), for architectures neither
Unicorn nor QEMU runs: moxie, ft32, iq2000 and the other sim/ ports.

Each architecture's simulator library (sim/<arch>/libsim.a from a gdb 16 build) is linked into
dfsim, a small stdin/stdout front end in the style of sim/common/nrun.c: it loads a one-page
ELF and then, per case, takes memory writes, register stores (gdb's register numbers, which the
simulators use), one step, and register/memory reads. The data pages the p-code touched are
filled with the same filler; a page the simulator has no memory for is bad-address, and a step
that stops with a signal (illegal instruction, trap) is ref-exception.

dfsim-<sim> and gdb (for the register numbering, "maint print registers") come from
$DIFFFUZZ_GDBSIM_DIR, default ~/.local/share/difffuzz-gdbsim/bin; tools/difffuzz/build_dfsim.sh
builds them (from tools/difffuzz/dfsim.c) out of a gdb 16 tree configured with
--enable-targets=all --enable-sim.
"""
import os
import select
import subprocess
import tempfile

from pcode_emu import State, Unmodeled, step
from qemu_backend import PAGE, fill_byte

_SESSIONS = {}
_REGNUMS = {}


def elf_sections(vaddr, data, machine, big, flags=0):
    """An ELF32 executable with one PT_LOAD and a matching .text section (sim_load loads sections)."""
    import struct
    e = ">" if big else "<"
    shstr = b"\0.text\0.shstrtab\0"
    ident = b"\x7fELF" + bytes([1, 2 if big else 1, 1, 0]) + b"\0" * 8
    text_off = PAGE
    shstr_off = text_off + len(data)
    shoff = (shstr_off + len(shstr) + 3) & ~3
    hdr = ident + struct.pack(e + "HHIIIIIHHHHHH", 2, machine, 1, vaddr, 52, shoff, flags, 52, 32, 1, 40, 3, 2)
    ph = struct.pack(e + "IIIIIIII", 1, text_off, vaddr, vaddr, len(data), len(data), 7, PAGE)
    img = bytearray(hdr + ph)
    img += bytes(text_off - len(img)) + data + shstr
    img += bytes(shoff - len(img))
    img += bytes(40)
    img += struct.pack(e + "IIIIIIIIII", 1, 1, 6, vaddr, text_off, len(data), 0, 0, 4, 0)
    img += struct.pack(e + "IIIIIIIIII", 7, 3, 0, 0, shstr_off, len(shstr), 0, 0, 1, 0)
    return bytes(img)


def bindir():
    return os.environ.get("DIFFFUZZ_GDBSIM_DIR", os.path.expanduser("~/.local/share/difffuzz-gdbsim/bin"))


def available(arch):
    """Whether the dfsim driver is installed, and the gdb that supplies the register numbers of an
    architecture without sim_regnums."""
    sim = getattr(arch, "gdbsim", None)
    if not sim or not os.access(os.path.join(bindir(), "dfsim-" + sim), os.X_OK):
        return False
    return hasattr(arch, "sim_regnums") or os.access(os.path.join(bindir(), "gdb"), os.X_OK)


def regnums(arch):
    """{gdb register name: (number, size)} for the architecture's simulator."""
    if hasattr(arch, "sim_regnums"):
        return arch.sim_regnums
    key = getattr(arch, "gdb_arch", arch.gdbsim)
    if key not in _REGNUMS:
        out = subprocess.run([os.path.join(bindir(), "gdb"), "-nx", "-batch", "-ex", "set architecture " + key,
                              "-ex", "maint print registers"], capture_output=True, text=True).stdout
        tab = {}
        for line in out.splitlines():
            f = line.split()
            if len(f) >= 5 and f[1].isdigit() and f[4].isdigit() and f[0] not in ("''", "Name"):
                tab[f[0].lstrip("$")] = (int(f[1]), int(f[4]))
        _REGNUMS[key] = tab
    return _REGNUMS[key]


class Session:
    def __init__(self, arch, page):
        self.arch, self.page = arch, page
        self.code = {}
        self.last = None
        self.dir = tempfile.mkdtemp(prefix="gdbsim-")
        img = os.path.join(self.dir, "case.elf")
        with open(img, "wb") as f:
            f.write(elf_sections(page, bytes(PAGE), arch.elf_machine, arch.big, getattr(arch, "elf_flags", 0)))
        self.log = open(os.path.join(self.dir, "sim.log"), "w")
        cmd = [os.path.join(bindir(), "dfsim-" + arch.gdbsim), *getattr(arch, "sim_args", ()), img]
        self.proc = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=self.log, text=True)
        if self._line(10) != "READY":
            raise RuntimeError("dfsim did not start; see " + self.log.name)

    def _line(self, timeout):
        ready, _, _ = select.select([self.proc.stdout], [], [], timeout)
        if not ready:
            raise TimeoutError
        line = self.proc.stdout.readline()
        if not line:
            raise TimeoutError
        return line.strip()

    def cmd(self, s, timeout=10):
        self.proc.stdin.write(s + "\n")
        self.proc.stdin.flush()
        return self._line(timeout).split()

    def close(self):
        try:
            self.proc.stdin.write("Q\n")
            self.proc.stdin.flush()
            self.proc.wait(timeout=5)
        except (OSError, subprocess.TimeoutExpired):
            self.proc.kill()

    def ask(self, r):
        """Run one request (the same dict shape gdbsim used): mem, regs, pc, read, read_mem."""
        big, tab = self.arch.big, regnums(self.arch)
        for a, hx in r["mem"]:
            if self.cmd("W %x %s" % (a, hx))[1] == "-1":
                return {"ok": False, "bad": True}
        for n, v in list(r["regs"].items()) + [(self.arch.gdb_pc, r["pc"])]:
            num, size = tab[n]
            b = (v & ((1 << (8 * size)) - 1)).to_bytes(size, "big" if getattr(self.arch, "sim_store_big", big) else "little")
            self.cmd("S %d %s" % (num, b.hex()))
        for _ in range(r.get("steps", 1)):
            o = self.cmd("T")
            reason, sig = int(o[1]), int(o[2])
            if reason != 3 or sig not in (0, 5):          # sim_stopped by SIGTRAP after one step
                return {"ok": False, "why": "stop %d signal %d" % (reason, sig)}
        def get(n):
            num, size = tab[n]
            h = self.cmd("G %d %d" % (num, size))[1]
            return int.from_bytes(bytes.fromhex(h), "big" if getattr(self.arch, "sim_fetch_big", big) else "little")
        out = {n: get(n) for n in r["read"]}
        mem = []
        for a, size in r["read_mem"]:
            o = self.cmd("R %x %d" % (a, size))
            if o[0] != "OK":
                return {"ok": False, "bad": True}
            mem.append(o[1])
        return {"ok": True, "regs": out, "mem": mem, "pc": get(self.arch.gdb_pc)}


def session(arch, page, addr=None, code=b""):
    s = _SESSIONS.get(arch.name)
    # simulators that cache decoded instructions (the CGEN ones) do not see a rewrite of code
    # they already ran, so a new instruction at an address used before gets a fresh simulator
    stale = s is not None and any(s.code.get(addr + i, b) != b for i, b in enumerate(code))
    if s is None or s.proc.poll() is not None or s.page != page or stale:
        if s is not None:
            s.close()
        s = _SESSIONS[arch.name] = Session(arch, page)
    for i, b in enumerate(code):
        s.code[addr + i] = b
    s.last = addr
    return s


def run_case_gdbsim(arch, regs, row, cand, rng, seed, tmp):
    addr, size = cand["addr"], len(cand["bytes"])
    bits = 64 if arch.elf64 else 32
    init = {n: arch.rand_reg(rng, bits) for n, _ in arch.gprs}
    arch.fix_inputs(init, rng)
    flags = rng.getrandbits(32)
    words_ = []
    for k, fields, fixed in arch.flag_words():
        word = 0
        for n, (sh, wd) in fields.items():
            word |= ((flags >> sh) & ((1 << wd) - 1)) << sh
        words_.append((k, fields, fixed(word)))

    bias = getattr(arch, "gdb_data_bias", None)
    st = State(arch.big, lambda a: fill_byte(a, seed), regs)
    if bias is None:
        for i, b in enumerate(cand["bytes"]):
            st.mem[addr + i] = b
    derived = arch.gdb_derived() if hasattr(arch, "gdb_derived") else {}
    for n, _ in arch.gprs:
        st.set(n, init[n])
    for k, fields, word in words_:
        for n, (sh, wd) in fields.items():
            reg, off = arch.sleigh_field(n, sh, wd)
            cur = st.get(reg) & ~(((1 << wd) - 1) << off)
            st.set(reg, cur | (((word >> sh) & ((1 << wd) - 1)) << off))
    if arch.pc in regs:
        st.set(arch.pc, addr)
    derived_in = {k: f(st) for k, f in derived.items()}
    try:
        nxt = step(st, row["ops"], addr, size)
    except Unmodeled as e:
        return {"status": "unmodeled", "why": str(e)}
    if not all(arch.addr_ok(a) and arch.addr_ok(a + s - 1) for a, s in st.accesses):
        return {"status": "bad-address"}
    ignore = arch.ignored(cand["mnemonic"], cand["op_str"], st)
    if "*" in ignore:
        return {"status": "undefined"}
    if getattr(arch, "misaligned_undefined", False) and any(s in (2, 4, 8) and a % s for a, s in st.accesses):
        return {"status": "undefined"}

    code_page = addr & ~(PAGE - 1)
    pages = sorted({(a + i) & ~(PAGE - 1) for a, s in st.accesses for i in (0, s - 1)})
    gaddr = (lambda a: a + bias) if bias is not None else (lambda a: a)
    mem = []
    for p in pages:
        mem.append([gaddr(p), bytes(fill_byte(p + i, seed) for i in range(PAGE)).hex()])
    mem.append([addr, (bytes(cand["bytes"]) + getattr(arch, "gdb_insn_pad", b"")).hex()])
    name = getattr(arch, "gdb_reg", lambda n: n)
    setr = {name(n): init[n] & ((1 << bits) - 1) for n, _ in arch.gprs if n in regs}
    for k, fields, word in words_:
        setr[k] = word
    setr.update(derived_in)
    read = list(setr)
    r = {"mem": mem, "regs": setr, "pc": addr, "read": read, "read_mem": [[gaddr(p), PAGE] for p in pages]}
    # an architecture can ask to run the padding after the instruction too (sim/m32r commits a
    # 16-bit instruction's condition bit only at the end of its word)
    extra = arch.gdbsim_extra_steps(cand) if hasattr(arch, "gdbsim_extra_steps") else 0
    r["steps"] = 1 + extra
    cbias = getattr(arch, "gdb_code_bias", 0)
    r["pc"] = addr + cbias
    r["mem"][-1][0] = addr + cbias
    try:
        s = session(arch, code_page + cbias, addr + cbias, bytes(cand["bytes"]) + getattr(arch, "gdb_insn_pad", b""))
        res = s.ask(r)
    except (TimeoutError, OSError, RuntimeError, ValueError, IndexError) as e:
        s = _SESSIONS.pop(arch.name, None)
        why = type(e).__name__
        if s is not None:
            s.proc.kill()
            s.log.flush()
            tail = open(s.log.name).read().strip().splitlines()
            why = tail[-1][:60] if tail else why
        return {"status": "ref-exception", "why": "sim " + why}
    if not res.get("ok"):
        if res.get("bad"):
            return {"status": "bad-address"}
        # a simulator stopped by a signal is not reliable for the next case (sim/pru then fails
        # an event-queue assertion), so it is restarted
        s = _SESSIONS.pop(arch.name, None)
        if s is not None:
            s.close()
        return {"status": "ref-exception", "why": "sim " + str(res.get("why"))[:60]}
    ref = res["regs"]
    diffs = {}
    partial = arch.partial(cand["mnemonic"], cand["op_str"]) if hasattr(arch, "partial") else {}
    for n, _ in arch.gprs:
        if n in ignore or n not in regs:
            continue
        w = ((1 << (8 * regs[n][1])) - 1) & partial.get(n, -1)
        a, b = st.get(n) & w, ref[name(n)] & w
        if a != b:
            diffs[n] = (a, b)
    for k, fields, _ in words_:
        for n, (sh, wd) in fields.items():
            if n in ignore:
                continue
            reg, off = arch.sleigh_field(n, sh, wd)
            a, b = (st.get(reg) >> off) & ((1 << wd) - 1), (ref[k] >> sh) & ((1 << wd) - 1)
            if a != b:
                diffs[n] = (a, b)
    for k, f in derived.items():
        if k not in ignore and f(st) != ref[k]:
            diffs[k] = (f(st), ref[k])
    target = nxt & ((1 << bits) - 1)
    landed = (res["pc"] - cbias - extra * len(getattr(arch, "gdb_insn_pad", b""))) & ((1 << bits) - 1)
    if landed != target and "pc" not in ignore:
        diffs["pc"] = (target, landed)
    for p, blob in zip(pages, res["mem"]):
        blob = bytes.fromhex(blob)
        for i in range(PAGE):
            pv = st.mem.get(p + i, fill_byte(p + i, seed))
            if bias is None and p == code_page and addr <= p + i < addr + size:
                continue
            if hasattr(arch, "mem_ignored") and arch.mem_ignored(p + i):
                continue
            if pv != blob[i]:
                diffs[f"mem[{p + i:#x}]"] = (pv, blob[i])
    if not diffs:
        return {"status": "match"}
    if st.skipped_callother and all(k.startswith("mem[") for k in diffs):
        return {"status": "unmodeled", "why": "CALLOTHER side effect"}
    return {"status": "mismatch", "diffs": {k: [hex(x), hex(y)] for k, (x, y) in diffs.items()},
            "input": {k: hex(v) for k, v in init.items()}, "flags_in": hex(flags)}
