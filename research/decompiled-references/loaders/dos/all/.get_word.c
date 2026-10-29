// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2070
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2070 jmp     cs:off_B020
//
// Resolved target: get_word
// Target address:  0xB4B8
// GOT/IAT slot:    0xB020
// Slot symbol:     off_B020
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

