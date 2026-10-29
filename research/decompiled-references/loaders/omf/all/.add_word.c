// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3220
// Name:            .add_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3220 jmp     cs:off_140F8
//
// Resolved target: add_word
// Target address:  0x146E0
// GOT/IAT slot:    0x140F8
// Slot symbol:     off_140F8
// Target type:     <no type info>
// ============================================================

void .add_word(/* see target signature */)
{
    // Tail-call to add_word via GOT/IAT indirection
    return add_word(/* forwarded args */);
}

