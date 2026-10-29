// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0 jmp     cs:off_50B8
//
// Resolved target: strcmp
// Target address:  0x5218
// GOT/IAT slot:    0x50B8
// Slot symbol:     off_50B8
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

