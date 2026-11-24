import os
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[2] / "tools"))
import gen_riscv_sail as g  # noqa: E402

SAIL = """\
enum toyop = {TANDN, TMAX}

union clause instruction = TOY_RTYPE : (regidx, regidx, regidx, toyop)

mapping clause encdec = TOY_RTYPE(rs2, rs1, rd, TANDN)
  <-> 0b0100000 @ encdec_reg(rs2) @ encdec_reg(rs1) @ 0b111 @ encdec_reg(rd) @ 0b0110011

mapping clause encdec = TOY_RTYPE(rs2, rs1, rd, TMAX)
  <-> 0b0000101 @ encdec_reg(rs2) @ encdec_reg(rs1) @ 0b110 @ encdec_reg(rd) @ 0b0110011
  when xlen == 64

mapping toy_mnemonic : toyop <-> string = {
  TANDN <-> "andn",
  TMAX  <-> "max"
}

mapping clause assembly = TOY_RTYPE(rs2, rs1, rd, op)
  <-> toy_mnemonic(op) ^ spc() ^ reg_name(rd) ^ sep() ^ reg_name(rs1) ^ sep() ^ reg_name(rs2)

$[split op]
function clause execute TOY_RTYPE(rs2, rs1, rd, op) = {
  let a = X(rs1);
  let b = X(rs2);
  let result : xlenbits = match op {
    TANDN => a & ~(b),
    TMAX  => if a >_s b then a else b,
  };
  X(rd) = result;
  RETIRE_SUCCESS
}

union clause instruction = TOY_RORI : (bits(6), regidx, regidx)

mapping clause encdec = TOY_RORI(shamt, rs1, rd)
  <-> 0b011000 @ shamt @ encdec_reg(rs1) @ 0b101 @ encdec_reg(rd) @ 0b0010011
  when xlen == 64 | shamt[5] == 0b0

mapping clause assembly = TOY_RORI(shamt, rs1, rd)
  <-> "rori" ^ spc() ^ reg_name(rd) ^ sep() ^ reg_name(rs1) ^ sep() ^ hex_bits_6(shamt)

function clause execute TOY_RORI(shamt, rs1, rd) = {
  let shamt = shamt[log2_xlen - 1 .. 0];
  X(rd) = X(rs1) >>> shamt;
  RETIRE_SUCCESS
}
"""

TOKENS = """\
define token instr (32)
  op0006=(0,6)
  funct3=(12,14)
  op2024=(20,24)
  op2025=(20,25)
  op2531=(25,31)
  funct7=(25,31)
  op2631=(26,31)
;
"""


class GenerateTests(unittest.TestCase):
    def setUp(self):
        self.dir = tempfile.TemporaryDirectory()
        sail = os.path.join(self.dir.name, "toy.sail")
        tokens = os.path.join(self.dir.name, "reg.sinc")
        Path(sail).write_text(SAIL)
        Path(tokens).write_text(TOKENS)
        model = g.Model()
        model.load(sail, True)
        self.gen = g.Gen(model, g.load_tokens(tokens), 160)

    def tearDown(self):
        self.dir.cleanup()

    def texts(self, xlen):
        cons, _ = self.gen.run(xlen)
        return {mn: (m, v, text) for mn, m, v, text in cons}

    def test_fixed_bits_become_token_constraints(self):
        rv32 = self.texts(32)
        m, v, text = rv32["andn"]
        self.assertEqual((m, v), (0xfe00707f, 0x40007033))
        self.assertIn(":andn rd,rs1,rs2 is rd & rs1 & rs2 & op0006=0x33 & funct3=0x7 & funct7=0x20", text)

    def test_a_guard_on_xlen_drops_the_form(self):
        self.assertNotIn("max", self.texts(32))
        self.assertIn("max", self.texts(64))

    def test_a_guard_on_a_field_bit_narrows_the_operand(self):
        _, _, rv32 = self.texts(32)["rori"]
        _, _, rv64 = self.texts(64)["rori"]
        self.assertIn("op2024 & op0006=0x13 & funct3=0x5 & funct7=0x30", rv32)
        self.assertIn("op2025 & op0006=0x13 & funct3=0x5 & op2631=0x18", rv64)

    def test_semantics_compile_to_pcode(self):
        _, _, andn = self.texts(64)["andn"]
        self.assertIn("~rs2", andn)
        _, _, mx = self.texts(64)["max"]
        self.assertIn("rs1 s> rs2", mx)
        self.assertIn("goto <sgelse1>", mx)
        _, _, rori = self.texts(64)["rori"]
        self.assertIn("0x40:8 -", rori)

    def test_operator_precedence(self):
        e = g.parse_expr("a & ~(b) | c << 2 + d")
        self.assertEqual(e[0:2], ("bin", "|"))
        self.assertEqual(e[3][1], "+")
        self.assertEqual(e[3][2][1], "<<")


FP_SAIL = """\
union clause instruction = TOY_FSGNJ : (fregidx, fregidx, fregidx)

mapping clause encdec = TOY_FSGNJ(rs2, rs1, rd)
  <-> 0b0010000 @ encdec_freg(rs2) @ encdec_freg(rs1) @ 0b000 @ encdec_freg(rd) @ 0b1010011

mapping clause assembly = TOY_FSGNJ(rs2, rs1, rd)
  <-> "fsgnj.s" ^ spc() ^ freg_name(rd) ^ sep() ^ freg_name(rs1) ^ sep() ^ freg_name(rs2)

function clause execute TOY_FSGNJ(rs2, rs1, rd) = {
  let a = F_S(rs1);
  let b = F_S(rs2);
  F_S(rd) = b[31..31] @ a[30..0];
  RETIRE_SUCCESS
}

union clause instruction = TOY_LB : (regidx, regidx)

mapping clause encdec = TOY_LB(rs1, rd)
  <-> 0b000000000000 @ encdec_reg(rs1) @ 0b000 @ encdec_reg(rd) @ 0b0000011

mapping clause assembly = TOY_LB(rs1, rd)
  <-> "lb" ^ spc() ^ reg_name(rd) ^ sep() ^ "(" ^ reg_name(rs1) ^ ")"

function clause execute TOY_LB(rs1, rd) = {
  let v : bits(8) = match mem_read(Read(Data), 0, 0, X(rs1), 1, false, false, false) {
    Ok(v) => v,
    Err(e) => return e,
  };
  X(rd) = sign_extend(v);
  RETIRE_SUCCESS
}
"""

FP_TOKENS = TOKENS.replace("  op2024=(20,24)", "  op2024=(20,24)\n  op0711=(7,11)\n  op1519=(15,19)")


class FloatAndMemoryTests(unittest.TestCase):
    def setUp(self):
        self.dir = tempfile.TemporaryDirectory()
        sail = os.path.join(self.dir.name, "toy.sail")
        tokens = os.path.join(self.dir.name, "reg.sinc")
        Path(sail).write_text(FP_SAIL)
        Path(tokens).write_text(FP_TOKENS)
        model = g.Model()
        model.load(sail, True)
        self.gen = g.Gen(model, g.load_tokens(tokens), 160)

    def tearDown(self):
        self.dir.cleanup()

    def texts(self):
        cons, _ = self.gen.run(64)
        return {mn: text for mn, m, v, text in cons}

    def test_single_precision_operands_are_unboxed_and_the_result_boxed(self):
        text = self.texts()["fsgnj.s"]
        self.assertIn(":fsgnj.s frd,frs1,frs2 is", text)
        self.assertIn("0xffffffff:4", text)
        self.assertIn("0x7fc00000", text)
        self.assertIn("0xffffffff00000000", text)

    def test_a_memory_read_is_a_ram_load(self):
        text = self.texts()["lb"]
        self.assertIn(":lb rd,(rs1) is", text)
        self.assertIn("*[ram]:1 rs1", text)
        self.assertIn("sext(", text)


if __name__ == "__main__":
    unittest.main()
