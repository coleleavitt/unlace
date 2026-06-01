// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1030
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1030 jmp     cs:off_7000
//
// Resolved target: get_word
// Target address:  0x70F8
// GOT/IAT slot:    0x7000
// Slot symbol:     off_7000
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

