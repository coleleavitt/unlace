// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5030
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5030 jmp     cs:off_1A000
//
// Resolved target: get_word
// Target address:  0x1A380
// GOT/IAT slot:    0x1A000
// Slot symbol:     off_1A000
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

