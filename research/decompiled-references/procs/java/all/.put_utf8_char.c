// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6190
// Name:            .put_utf8_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6190 jmp     cs:off_2D0B0
//
// Resolved target: put_utf8_char
// Target address:  0x2D5B0
// GOT/IAT slot:    0x2D0B0
// Slot symbol:     off_2D0B0
// Target type:     <no type info>
// ============================================================

void .put_utf8_char(/* see target signature */)
{
    // Tail-call to put_utf8_char via GOT/IAT indirection
    return put_utf8_char(/* forwarded args */);
}

