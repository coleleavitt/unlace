#!/usr/bin/env python3
"""Derive a Sail Q (quad-precision) extension from the Sail model's D extension.

The Sail RISC-V model has no Q extension (sail-riscv lists Ext_Q but defines no instruction), so
this rewrites extensions/FD/dext_insts.sail and the D enums of extensions/FD/freg_type.sail into
the Q equivalents for tools/gen_riscv_sail.py: names *_D -> *_Q, binary64 -> binary128 layouts
(1/15/112 sign/exponent/mantissa), riscv_f64* softfloat calls -> riscv_f128*, the fmt field 01 -> 11
in every encoding, ".d" -> ".q" in the mnemonics. fmv.x.d / fmv.d.x have no Q form below RV128 and
are dropped; fcvt.s.q / fcvt.q.s come from fcvt.s.d / fcvt.d.s, and fcvt.d.q / fcvt.q.d are added
the same way. flq / fsq are added as LOAD_FP / STORE_FP at a 16-byte width.

    python3 tools/sail_d_to_q.py <sail-riscv>/model > qext_insts.sail
"""
import re
import sys
from pathlib import Path


def enums(model):
    text = (model / "extensions/FD/freg_type.sail").read_text()
    out = []
    for m in re.finditer(r"^enum (\w+_D) = \{([^}]*)\}", text, re.M):
        name = m.group(1)
        members = [x.strip() for x in re.sub(r"//[^\n]*", "", m.group(2)).split(",") if x.strip()]
        members = [re.sub(r"\b([A-Z]+)_D_", r"\1_Q_", re.sub(r"_D\b", "_Q", x)) for x in members if x not in ("FMV_X_D", "FMV_D_X")]
        if name == "f_un_rm_ff_op_D":
            members += ["FCVT_D_Q", "FCVT_Q_D"]
        if members:
            out.append("enum %s = {%s}" % (name[:-2] + "_Q", ", ".join(members)))
    return "\n".join(out) + "\n"


def transform(text):
    # the binary64 layout (1/11/52) becomes binary128 (1/15/112)
    text = text.replace("x64[63..63], x64[62..52], x64[51..0]", "x64[127..127], x64[126..112], x64[111..0]")
    text = re.sub(r"\bbits\(11\)", "bits(15)", text)
    text = re.sub(r"\bbits\(52\)", "bits(112)", text)
    text = re.sub(r"\bbits\(64\)", "bits(128)", text)
    text = re.sub(r"\briscv_(f|i|ui)(\d+)To(F|I|Ui)64\b", r"riscv_\1\2To\g<3>128", text)
    text = re.sub(r"\briscv_f64", "riscv_f128", text)
    text = re.sub(r"\b(\w+)_D\b", r"\1_Q", text)
    text = re.sub(r"\b([A-Z]+)_D_", r"\1_Q_", text)
    text = text.replace("Ext_D", "Ext_Q").replace("haveDoubleFPU", "haveQuadFPU")
    text = re.sub(r"\s*&\s*validDoubleRegs\(\[[^\]]*\]\)", "", text)
    text = re.sub(r'"([a-z.]*?)\.d(\.|")', lambda m: '"%s.q%s' % (m.group(1), m.group(2)), text)
    text = re.sub(r'"(fcvt\.[a-z]+)\.d"', r'"\1.q"', text)
    text = text.replace('"fcvt.d.', '"fcvt.q.')

    # the fmt field of every encoding: 01 (D) -> 11 (Q)
    def enc(m):
        body = m.group(0)
        body = re.sub(r"<-> (\s*)0b([01]{3})_([01]{2})01 @", lambda x: "<-> %s0b%s_%s11 @" % (x.group(1), x.group(2), x.group(3)), body)
        body = body.replace("encdec_freg(rs3) @ 0b01 @", "encdec_freg(rs3) @ 0b11 @")
        return body
    text = re.sub(r"mapping clause encdec = [^\n]*\n[^\n]*<->[^\n]*", enc, text)
    # fcvt.s.q: the source format in rs2 is Q
    text = re.sub(r"(F_UN_RM_FF_TYPE_Q\(rs1, rm, rd, FCVT_S_Q\)\n\s*<-> 0b010_0000 @ )0b00001", r"\g<1>0b00011", text)
    # no fmv.x.q / fmv.q.x below RV128
    text = re.sub(r"mapping clause encdec = F_UN_[XF]_TYPE_Q\(rs1, rd, FMV_[XQ]_[XQ]\)\n[^\n]*\n[^\n]*\n", "", text)
    return text


def add_conversions(text):
    """fcvt.d.q / fcvt.q.d from fcvt.s.q / fcvt.q.s."""
    extra = []
    m = re.search(r"mapping clause encdec = F_UN_RM_FF_TYPE_Q\(rs1, rm, rd, FCVT_S_Q\)\n[^\n]*\n[^\n]*\n", text)
    extra.append(m.group(0).replace("FCVT_S_Q", "FCVT_D_Q").replace("0b010_0000", "0b010_0001"))
    m = re.search(r"mapping clause encdec = F_UN_RM_FF_TYPE_Q\(rs1, rm, rd, FCVT_Q_S\)\n[^\n]*\n[^\n]*\n", text)
    extra.append(m.group(0).replace("FCVT_Q_S", "FCVT_Q_D").replace("@ 0b00000 @", "@ 0b00001 @"))
    for src, dst, a, b in (("FCVT_S_Q", "FCVT_D_Q", ("F_or_X_S", "F_or_X_D"), ("riscv_f128ToF32", "riscv_f128ToF64")),
                           ("FCVT_Q_S", "FCVT_Q_D", ("F_or_X_S", "F_or_X_D"), ("riscv_f32ToF128", "riscv_f64ToF128"))):
        m = re.search(r"function clause execute F_UN_RM_FF_TYPE_Q\(rs1, rm, rd, %s\) = \{.*?\n\}\n" % src, text, re.S)
        extra.append(m.group(0).replace(src, dst).replace(*a).replace(*b))
    text = text.replace('FCVT_Q_S  <-> "fcvt.q.s"', 'FCVT_Q_S  <-> "fcvt.q.s",\n    FCVT_D_Q  <-> "fcvt.d.q",\n    FCVT_Q_D  <-> "fcvt.q.d"')
    return text + "\n// fcvt.d.q / fcvt.q.d\n" + "\n".join(extra)


LOADSTORE = """
// flq / fsq: LOAD_FP / STORE_FP at a 16-byte width

union clause instruction = LOAD_FP_Q : (bits(12), regidx, fregidx)

mapping clause encdec = LOAD_FP_Q(imm, rs1, rd)
  <-> imm @ encdec_reg(rs1) @ 0b100 @ encdec_freg(rd) @ 0b000_0111
  when haveQuadFPU()

function clause execute LOAD_FP_Q(imm, rs1, rd) = {
  let offset : xlenbits = sign_extend(imm);
  match vmem_read(rs1, offset, 16, Load(Data), false, false, false) {
    Ok(result) => { F(rd) = result; RETIRE_SUCCESS },
    Err(e)     => e,
  }
}

mapping clause assembly = LOAD_FP_Q(imm, rs1, rd)
  <-> "flq" ^ spc() ^ freg_name(rd) ^ sep() ^ hex_bits_signed_12(imm) ^ opt_spc() ^ "(" ^ opt_spc() ^ reg_name(rs1) ^ opt_spc() ^ ")"

union clause instruction = STORE_FP_Q : (bits(12), fregidx, regidx)

mapping clause encdec = STORE_FP_Q(imm, rs2, rs1)
  <-> imm[11..5] @ encdec_freg(rs2) @ encdec_reg(rs1) @ 0b100 @ imm[4..0] @ 0b010_0111
  when haveQuadFPU()

function clause execute STORE_FP_Q(imm, rs2, rs1) = {
  let offset : xlenbits = sign_extend(imm);
  let data = F(rs2);
  match vmem_write(rs1, offset, 16, data, Store(Data), false, false, false) {
    Ok(true)  => RETIRE_SUCCESS,
    Ok(false) => internal_error(__FILE__, __LINE__, "store got false from vmem_write"),
    Err(e)    => e,
  }
}

mapping clause assembly = STORE_FP_Q(imm, rs2, rs1)
  <-> "fsq" ^ spc() ^ freg_name(rs2) ^ sep() ^ hex_bits_signed_12(imm) ^ opt_spc() ^ "(" ^ opt_spc() ^ reg_name(rs1) ^ opt_spc() ^ ")"
"""


def main():
    model = Path(sys.argv[1])
    text = transform((model / "extensions/FD/dext_insts.sail").read_text())
    text = add_conversions(text)
    sys.stdout.write("// Derived from extensions/FD/dext_insts.sail by tools/sail_d_to_q.py: do not edit.\n\n")
    sys.stdout.write("function haveQuadFPU() -> bool = currentlyEnabled(Ext_Q)\n\n")
    sys.stdout.write(enums(model) + "\n" + text + LOADSTORE)


if __name__ == "__main__":
    main()
