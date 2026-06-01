// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3070
// Name:            .insn_add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3070 jmp     cs:off_1A020
//
// Resolved target: insn_add_dref
// Target address:  0x1A2D8
// GOT/IAT slot:    0x1A020
// Slot symbol:     off_1A020
// Target type:     <no type info>
// ============================================================

void .insn_add_dref(/* see target signature */)
{
    // Tail-call to insn_add_dref via GOT/IAT indirection
    return insn_add_dref(/* forwarded args */);
}

