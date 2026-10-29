// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19540
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19540 jmp     cs:off_75288
//
// Resolved target: insn_add_cref
// Target address:  0x75AD8
// GOT/IAT slot:    0x75288
// Slot symbol:     off_75288
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

