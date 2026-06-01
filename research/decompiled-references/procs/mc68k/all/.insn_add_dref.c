// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60B0
// Name:            .insn_add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60B0 jmp     cs:off_1D040
//
// Resolved target: insn_add_dref
// Target address:  0x1D530
// GOT/IAT slot:    0x1D040
// Slot symbol:     off_1D040
// Target type:     <no type info>
// ============================================================

void .insn_add_dref(/* see target signature */)
{
    // Tail-call to insn_add_dref via GOT/IAT indirection
    return insn_add_dref(/* forwarded args */);
}

