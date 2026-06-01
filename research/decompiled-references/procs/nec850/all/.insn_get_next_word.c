// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9790
// Name:            .insn_get_next_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9790 jmp     cs:off_2E3B0
//
// Resolved target: insn_get_next_word
// Target address:  0x2EA30
// GOT/IAT slot:    0x2E3B0
// Slot symbol:     off_2E3B0
// Target type:     <no type info>
// ============================================================

void .insn_get_next_word(/* see target signature */)
{
    // Tail-call to insn_get_next_word via GOT/IAT indirection
    return insn_get_next_word(/* forwarded args */);
}

