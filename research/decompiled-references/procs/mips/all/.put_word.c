// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x190B0
// Name:            .put_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x190B0 jmp     cs:off_75040
//
// Resolved target: put_word
// Target address:  0x75890
// GOT/IAT slot:    0x75040
// Slot symbol:     off_75040
// Target type:     <no type info>
// ============================================================

void .put_word(/* see target signature */)
{
    // Tail-call to put_word via GOT/IAT indirection
    return put_word(/* forwarded args */);
}

