// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3030
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3030 jmp     cs:off_28000
//
// Resolved target: get_word
// Target address:  0x284B0
// GOT/IAT slot:    0x28000
// Slot symbol:     off_28000
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

