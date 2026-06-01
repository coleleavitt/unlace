// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19050
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19050 jmp     cs:off_75010
//
// Resolved target: get_word
// Target address:  0x75860
// GOT/IAT slot:    0x75010
// Slot symbol:     off_75010
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

