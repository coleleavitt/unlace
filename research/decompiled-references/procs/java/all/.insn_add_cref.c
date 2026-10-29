// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6320
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6320 jmp     cs:off_2D178
//
// Resolved target: insn_add_cref
// Target address:  0x2D678
// GOT/IAT slot:    0x2D178
// Slot symbol:     off_2D178
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

