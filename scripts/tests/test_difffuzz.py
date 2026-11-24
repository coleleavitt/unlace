from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[2] / "tools" / "difffuzz"))

from pcode_emu import State, Unmodeled, step  # noqa: E402
from slaregs import preprocess, register_map  # noqa: E402


def vn(space, offset, size):
    return {"space": space, "offset": offset, "size": size}


def op(opcode, output, *inputs):
    return {"opcode": opcode, "output": output, "inputs": list(inputs)}


REGS = {"A": (0, 4), "B": (4, 4), "F": (8, 1)}


class PcodeEmuTests(unittest.TestCase):
    def state(self, big=False):
        return State(big, lambda a: a & 0xFF, REGS)

    def test_add_with_carry_flag(self):
        st = self.state()
        st.set("A", 0xFFFFFFFF)
        st.set("B", 2)
        ops = [op("INT_CARRY", vn("register", 8, 1), vn("register", 0, 4), vn("register", 4, 4)),
               op("INT_ADD", vn("register", 0, 4), vn("register", 0, 4), vn("register", 4, 4))]
        self.assertEqual(step(st, ops, 0x1000, 4), 0x1004)
        self.assertEqual(st.get("A"), 1)
        self.assertEqual(st.get("F"), 1)

    def test_relative_branch_skips_ops(self):
        st = self.state()
        ops = [op("CBRANCH", None, vn("const", 2, 4), vn("const", 1, 1)),
               op("COPY", vn("register", 0, 4), vn("const", 7, 4)),
               op("COPY", vn("register", 4, 4), vn("const", 9, 4))]
        step(st, ops, 0, 4)
        self.assertEqual(st.get("A"), 0)
        self.assertEqual(st.get("B"), 9)

    def test_unwritten_memory_reads_the_fill_and_writes_are_recorded(self):
        st = self.state(big=True)
        st.set("A", 0x10)
        ops = [op("LOAD", vn("register", 4, 4), vn("const", 3, 8), vn("register", 0, 4)),
               op("STORE", None, vn("const", 3, 8), vn("register", 0, 4), vn("const", 0xAB, 1))]
        step(st, ops, 0, 4)
        self.assertEqual(st.get("B"), 0x10111213)
        self.assertEqual(st.writes, {0x10: 0xAB})

    def test_load_from_the_constant_space_is_the_pointer(self):
        st = self.state()
        st.set("A", 0x1FFFFF0)
        ops = [op("LOAD", vn("register", 4, 4), vn("const", 0, 8), vn("register", 0, 4))]
        step(st, ops, 0, 4)
        self.assertEqual(st.get("B"), 0x1FFFFF0)
        self.assertEqual(st.accesses, [])

    def test_branch_to_ram_is_the_next_pc(self):
        st = self.state()
        self.assertEqual(step(st, [op("BRANCH", None, vn("ram", 0x2000, 8))], 0, 4), 0x2000)

    def test_division_by_zero_is_unmodeled(self):
        st = self.state()
        with self.assertRaises(Unmodeled):
            step(st, [op("INT_DIV", vn("register", 0, 4), vn("const", 1, 4), vn("const", 0, 4))], 0, 4)


class SlaRegsTests(unittest.TestCase):
    def test_x86_64_registers(self):
        regs, big = register_map("x86:LE:64:default")
        self.assertFalse(big)
        self.assertEqual(regs["RAX"], (0, 8))
        self.assertEqual(regs["EAX"], (0, 4))
        self.assertEqual(regs["R8"][1], 8)

    def test_big_endian_language(self):
        _, big = register_map("PowerPC:BE:32:default")
        self.assertTrue(big)

    def test_preprocessor_conditionals(self):
        import tempfile
        with tempfile.TemporaryDirectory() as d:
            p = Path(d) / "t.slaspec"
            p.write_text('@define A "1"\n@if A == "1"\nyes\n@else\nno\n@endif\n@ifdef B\nb\n@endif\n')
            self.assertEqual(preprocess(p).split(), ["yes"])


class ArmHarnessTests(unittest.TestCase):
    def test_thumb_entry_and_exit(self):
        import struct
        from qemu_backend import ThumbHarness
        h = ThumbHarness()
        pro = h.prologue(0x400000)
        self.assertEqual(struct.unpack_from("<2I", pro, len(pro) - 8), (0xE51FF004, 0x400001))
        # bx pc must sit on a word address: PC reads as its address + 4 and A32 code follows
        self.assertEqual(h.epilogue_at([], 1, 0x400004)[:4], bytes.fromhex("7847c046"))
        self.assertEqual(h.epilogue_at([], 1, 0x400002)[:6], bytes.fromhex("c0467847c046"))

    def test_qemu_dir_list(self):
        import os
        import tempfile
        from qemu_backend import qemu_path
        with tempfile.TemporaryDirectory() as a, tempfile.TemporaryDirectory() as b:
            exe = os.path.join(b, "qemu-difffuzz-test")
            with open(exe, "w") as f:
                f.write("#!/bin/sh\n")
            os.chmod(exe, 0o755)
            old = os.environ.get("DIFFFUZZ_QEMU_DIR")
            os.environ["DIFFFUZZ_QEMU_DIR"] = a + os.pathsep + b
            try:
                self.assertEqual(qemu_path("qemu-difffuzz-test"), exe)
            finally:
                if old is None:
                    del os.environ["DIFFFUZZ_QEMU_DIR"]
                else:
                    os.environ["DIFFFUZZ_QEMU_DIR"] = old


if __name__ == "__main__":
    unittest.main()
