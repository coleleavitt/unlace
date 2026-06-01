// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7040
// Name:            .insn_add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7040 jmp     cs:off_26008
//
// Resolved target: insn_add_dref
// Target address:  0x262C0
// GOT/IAT slot:    0x26008
// Slot symbol:     off_26008
// Target type:     <no type info>
// ============================================================

void .insn_add_dref(/* see target signature */)
{
    // Tail-call to insn_add_dref via GOT/IAT indirection
    return insn_add_dref(/* forwarded args */);
}

