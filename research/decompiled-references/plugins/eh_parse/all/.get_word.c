// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6070
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6070 jmp     cs:off_2F020
//
// Resolved target: get_word
// Target address:  0x2F690
// GOT/IAT slot:    0x2F020
// Slot symbol:     off_2F020
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

