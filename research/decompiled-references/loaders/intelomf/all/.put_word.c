// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1030
// Name:            .put_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1030 jmp     cs:off_5000
//
// Resolved target: put_word
// Target address:  0x5248
// GOT/IAT slot:    0x5000
// Slot symbol:     off_5000
// Target type:     <no type info>
// ============================================================

void .put_word(/* see target signature */)
{
    // Tail-call to put_word via GOT/IAT indirection
    return put_word(/* forwarded args */);
}

