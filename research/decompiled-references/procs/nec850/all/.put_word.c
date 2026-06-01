// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90B0
// Name:            .put_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90B0 jmp     cs:off_2E040
//
// Resolved target: put_word
// Target address:  0x2E6B0
// GOT/IAT slot:    0x2E040
// Slot symbol:     off_2E040
// Target type:     <no type info>
// ============================================================

void .put_word(/* see target signature */)
{
    // Tail-call to put_word via GOT/IAT indirection
    return put_word(/* forwarded args */);
}

