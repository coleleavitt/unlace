// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6050
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6050 jmp     cs:off_8D010
//
// Resolved target: get_word
// Target address:  0x8D590
// GOT/IAT slot:    0x8D010
// Slot symbol:     off_8D010
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

