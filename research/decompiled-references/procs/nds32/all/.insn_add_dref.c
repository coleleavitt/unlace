// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x80A0
// Name:            .insn_add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x80A0 jmp     cs:off_2A038
//
// Resolved target: insn_add_dref
// Target address:  0x2A5A8
// GOT/IAT slot:    0x2A038
// Slot symbol:     off_2A038
// Target type:     <no type info>
// ============================================================

void .insn_add_dref(/* see target signature */)
{
    // Tail-call to insn_add_dref via GOT/IAT indirection
    return insn_add_dref(/* forwarded args */);
}

