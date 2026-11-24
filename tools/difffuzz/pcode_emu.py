"""A concrete p-code interpreter for one lifted instruction at a time.

Input is the `ops` list of one `unlace raw-pcode --json` instruction row. Memory that was never
written reads from a caller-supplied fill function, so the reference emulator can map the same bytes
on demand. An op this interpreter cannot give a defined result for (CALLOTHER, a division by zero, a
float wider than 8 bytes) raises Unmodeled and the case is counted instead of compared.
"""
import math
import struct


class Unmodeled(Exception):
    pass


def mask(size):
    return (1 << (8 * size)) - 1


def sext(v, size):
    bits = 8 * size
    v &= (1 << bits) - 1
    return v - (1 << bits) if v >> (bits - 1) else v


FLOAT_FMT = {2: "e", 4: "f", 8: "d"}


def to_float(v, size):
    f = FLOAT_FMT.get(size)
    if f is None:
        raise Unmodeled(f"float{size * 8}")
    return struct.unpack("<" + f, v.to_bytes(size, "little"))[0]


def from_float(x, size):
    f = FLOAT_FMT.get(size)
    if f is None:
        raise Unmodeled(f"float{size * 8}")
    try:
        return int.from_bytes(struct.pack("<" + f, x), "little")
    except OverflowError:
        return int.from_bytes(struct.pack("<" + f, math.copysign(math.inf, x)), "little")


class State:
    def __init__(self, big_endian, fill, regs):
        self.big = big_endian
        self.fill = fill
        self.regs = regs
        self.reg = {}
        self.mem = {}
        self.uniq = {}
        self.csr = {}
        self.writes = {}
        self.accesses = []
        self.outputless_callother_noop = True
        self.skipped_callother = False
        # when set, a CALLOTHER with an output writes callother(op) instead of raising Unmodeled
        self.callother = None

    def _space(self, space):
        if space == "register":
            return self.reg, None
        if space == "unique":
            return self.uniq, None
        if space == "csreg":
            return self.csr, None
        return self.mem, self.fill

    def read(self, space, off, size):
        if space == "const":
            return off & mask(size)
        store, fill = self._space(space)
        if fill is not None:
            self.accesses.append((off, size))
        bs = bytes(store.get(off + i, fill(off + i) if fill else 0) for i in range(size))
        return int.from_bytes(bs, "big" if self.big else "little")

    def write(self, space, off, size, val):
        if space == "const":
            raise Unmodeled("write to const")
        store, fill = self._space(space)
        bs = (val & mask(size)).to_bytes(size, "big" if self.big else "little")
        if fill is not None:
            self.accesses.append((off, size))
        for i, b in enumerate(bs):
            store[off + i] = b
            if fill is not None:
                self.writes[off + i] = b

    def get(self, name):
        off, size = self.regs[name]
        return self.read("register", off, size)

    def set(self, name, val):
        off, size = self.regs[name]
        self.write("register", off, size, val)


def _vn(v):
    return v["space"], v["offset"], v["size"]


def step(state, ops, addr, size, max_steps=20000):
    """Run one instruction's ops; returns the address control goes to next."""
    state.uniq = {}
    i = 0
    steps = 0
    rd = lambda v: state.read(*_vn(v))
    while i < len(ops):
        steps += 1
        if steps > max_steps:
            raise Unmodeled("op budget")
        op = ops[i]
        opc = op["opcode"]
        ins = op["inputs"]
        out = op.get("output")
        osz = out["size"] if out else 0
        i += 1
        if opc in ("BRANCH", "CBRANCH", "CALL"):
            if opc == "CBRANCH" and not rd(ins[1]):
                continue
            t = ins[0]
            if t["space"] == "const":
                i = i - 1 + sext(t["offset"], 8 if t["size"] > 8 else t["size"])
                continue
            return t["offset"]
        if opc in ("BRANCHIND", "CALLIND", "RETURN"):
            return rd(ins[0])
        if opc == "CALLOTHER":
            if out is None and state.outputless_callother_noop:
                state.skipped_callother = True
                continue
            if out is not None and state.callother is not None:
                state.write(*_vn(out), state.callother(op))
                continue
            raise Unmodeled("CALLOTHER")
        if opc == "STORE":
            ptr = rd(ins[1])
            v = ins[2]
            state.write("ram", ptr, v["size"], rd(v))
            continue
        if opc == "LOAD":
            # space id 0 is the constant space: a dynamic export into it (`export *[const]:8 tmp`)
            # loads the pointer value itself
            if ins[0]["offset"] == 0:
                r = rd(ins[1]) & mask(osz)
            else:
                r = state.read("ram", rd(ins[1]), osz)
        else:
            r = _eval(opc, ins, rd, osz)
        state.write(*_vn(out), r)
    return addr + size


def _eval(opc, ins, rd, osz):
    a = rd(ins[0]) if ins else 0
    asz = ins[0]["size"] if ins else 0
    b = rd(ins[1]) if len(ins) > 1 else 0
    m = mask(osz) if osz else 0
    if opc in ("COPY", "CAST"):
        return a
    if opc == "INT_ADD" or opc == "PTRSUB":
        return (a + b) & m
    if opc == "PTRADD":
        return (a + b * rd(ins[2])) & m
    if opc == "INT_SUB":
        return (a - b) & m
    if opc == "INT_MULT":
        return (a * b) & m
    if opc == "INT_AND":
        return a & b
    if opc == "INT_OR":
        return a | b
    if opc == "INT_XOR":
        return a ^ b
    if opc == "INT_NEGATE":
        return ~a & m
    if opc == "INT_2COMP":
        return -a & m
    if opc == "INT_ZEXT":
        return a
    if opc == "INT_SEXT":
        return sext(a, asz) & m
    if opc == "INT_LEFT":
        return (a << b) & m if b < 8 * osz else 0
    if opc == "INT_RIGHT":
        return a >> b if b < 8 * asz else 0
    if opc == "INT_SRIGHT":
        return (sext(a, asz) >> min(b, 8 * asz)) & m
    if opc == "INT_EQUAL":
        return int(a == b)
    if opc == "INT_NOTEQUAL":
        return int(a != b)
    if opc == "INT_LESS":
        return int(a < b)
    if opc == "INT_LESSEQUAL":
        return int(a <= b)
    if opc == "INT_SLESS":
        return int(sext(a, asz) < sext(b, asz))
    if opc == "INT_SLESSEQUAL":
        return int(sext(a, asz) <= sext(b, asz))
    if opc == "INT_CARRY":
        return int(a + b > mask(asz))
    if opc == "INT_SCARRY":
        r = sext(a, asz) + sext(b, asz)
        return int(r != sext(r, asz))
    if opc == "INT_SBORROW":
        r = sext(a, asz) - sext(b, asz)
        return int(r != sext(r, asz))
    if opc in ("INT_DIV", "INT_REM", "INT_SDIV", "INT_SREM"):
        if b == 0:
            raise Unmodeled("division by zero")
        if opc == "INT_DIV":
            return (a // b) & m
        if opc == "INT_REM":
            return (a % b) & m
        sa, sb = sext(a, asz), sext(b, ins[1]["size"])
        q = abs(sa) // abs(sb)
        q = q if (sa < 0) == (sb < 0) else -q
        if opc == "INT_SDIV":
            return q & m
        return (sa - q * sb) & m
    if opc == "BOOL_NEGATE":
        return int(not a)
    if opc == "BOOL_AND":
        return int(bool(a) and bool(b))
    if opc == "BOOL_OR":
        return int(bool(a) or bool(b))
    if opc == "BOOL_XOR":
        return int(bool(a) != bool(b))
    if opc == "PIECE":
        return ((a << (8 * ins[1]["size"])) | b) & m
    if opc == "SUBPIECE":
        return (a >> (8 * b)) & m
    if opc == "POPCOUNT":
        return bin(a).count("1")
    if opc == "LZCOUNT":
        return 8 * asz - a.bit_length()
    if opc.startswith("FLOAT_") or opc in ("INT2FLOAT", "FLOAT2FLOAT", "TRUNC", "CEIL", "FLOOR", "ROUND"):
        return _float(opc, ins, a, asz, b, osz)
    raise Unmodeled(opc)


def _float(opc, ins, a, asz, b, osz):
    if opc == "INT2FLOAT":
        return from_float(float(sext(a, asz)), osz)
    x = to_float(a, asz)
    if opc == "FLOAT_NAN":
        return int(math.isnan(x))
    if opc == "FLOAT_NEG":
        return a ^ (1 << (8 * asz - 1))
    if opc == "FLOAT_ABS":
        return a & ~(1 << (8 * asz - 1))
    if opc == "FLOAT2FLOAT":
        return from_float(x, osz)
    if opc in ("TRUNC", "CEIL", "FLOOR", "ROUND"):
        if math.isnan(x) or math.isinf(x):
            raise Unmodeled("float to int of nan/inf")
        f = {"TRUNC": math.trunc, "CEIL": math.ceil, "FLOOR": math.floor,
             "ROUND": lambda v: math.floor(v + 0.5)}[opc]
        if opc in ("TRUNC",):
            r = f(x)
            if r != sext(r, osz):
                raise Unmodeled("float to int overflow")
            return r & mask(osz)
        return from_float(math.copysign(float(f(x)), x), osz)
    if opc == "FLOAT_SQRT":
        if not x >= 0:
            raise Unmodeled("nan result")
        return from_float(math.sqrt(x), osz)
    y = to_float(b, ins[1]["size"])
    if opc == "FLOAT_EQUAL":
        return int(x == y)
    if opc == "FLOAT_NOTEQUAL":
        return int(x != y)
    if opc == "FLOAT_LESS":
        return int(x < y)
    if opc == "FLOAT_LESSEQUAL":
        return int(x <= y)
    if opc == "FLOAT_ADD":
        r = x + y
    elif opc == "FLOAT_SUB":
        r = x - y
    elif opc == "FLOAT_MULT":
        r = x * y
    elif opc == "FLOAT_DIV":
        if y == 0:
            r = math.nan if x == 0 or math.isnan(x) else math.copysign(math.inf, x) * math.copysign(1, y)
        else:
            r = x / y
    else:
        raise Unmodeled(opc)
    if math.isnan(r):
        raise Unmodeled("nan result")
    if osz == 4:
        r = struct.unpack("<f", struct.pack("<f", r))[0] if not math.isinf(r) and abs(r) < 3.5e38 else r
    return from_float(r, osz)
