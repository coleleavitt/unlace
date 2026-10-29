// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8390
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8390 jmp     cs:off_2A1B0
//
// Resolved target: insn_add_cref
// Target address:  0x2BBC0
// GOT/IAT slot:    0x2A1B0
// Slot symbol:     off_2A1B0
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

