// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60C0
// Name:            .get_predef_insn_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60C0 jmp     cs:off_1D048
//
// Resolved target: get_predef_insn_cmt
// Target address:  0x1D538
// GOT/IAT slot:    0x1D048
// Slot symbol:     off_1D048
// Target type:     <no type info>
// ============================================================

void .get_predef_insn_cmt(/* see target signature */)
{
    // Tail-call to get_predef_insn_cmt via GOT/IAT indirection
    return get_predef_insn_cmt(/* forwarded args */);
}

