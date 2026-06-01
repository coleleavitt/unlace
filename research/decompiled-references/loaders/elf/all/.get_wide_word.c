// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9350
// Name:            .get_wide_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9350 jmp     cs:off_89190
//
// Resolved target: get_wide_word
// Target address:  0x8C490
// GOT/IAT slot:    0x89190
// Slot symbol:     off_89190
// Target type:     <no type info>
// ============================================================

void .get_wide_word(/* see target signature */)
{
    // Tail-call to get_wide_word via GOT/IAT indirection
    return get_wide_word(/* forwarded args */);
}

