// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2040
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2040 jmp     cs:off_7008
//
// Resolved target: get_word
// Target address:  0x71C0
// GOT/IAT slot:    0x7008
// Slot symbol:     off_7008
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

