// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65B0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65B0 jmp     cs:off_2D2C0
//
// Resolved target: strcmp
// Target address:  0x2D7C8
// GOT/IAT slot:    0x2D2C0
// Slot symbol:     off_2D2C0
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

