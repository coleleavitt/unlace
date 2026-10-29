// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2040
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2040 jmp     cs:off_A008
//
// Resolved target: get_word
// Target address:  0xA2B8
// GOT/IAT slot:    0xA008
// Slot symbol:     off_A008
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

