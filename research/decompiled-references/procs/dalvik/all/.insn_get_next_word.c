// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5470
// Name:            .insn_get_next_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5470 jmp     cs:off_1A220
//
// Resolved target: insn_get_next_word
// Target address:  0x1A5B8
// GOT/IAT slot:    0x1A220
// Slot symbol:     off_1A220
// Target type:     <no type info>
// ============================================================

void .insn_get_next_word(/* see target signature */)
{
    // Tail-call to insn_get_next_word via GOT/IAT indirection
    return insn_get_next_word(/* forwarded args */);
}

