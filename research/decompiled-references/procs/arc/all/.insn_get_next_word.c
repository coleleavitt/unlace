// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8710
// Name:            .insn_get_next_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8710 jmp     cs:off_2A370
//
// Resolved target: insn_get_next_word
// Target address:  0x2BD90
// GOT/IAT slot:    0x2A370
// Slot symbol:     off_2A370
// Target type:     <no type info>
// ============================================================

void .insn_get_next_word(/* see target signature */)
{
    // Tail-call to insn_get_next_word via GOT/IAT indirection
    return insn_get_next_word(/* forwarded args */);
}

