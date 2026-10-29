// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6790
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6790 jmp     cs:off_2F3B0
//
// Resolved target: strcmp
// Target address:  0x2FA28
// GOT/IAT slot:    0x2F3B0
// Slot symbol:     off_2F3B0
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

