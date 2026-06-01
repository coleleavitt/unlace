// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2230 jmp     cs:off_15100
//
// Resolved target: strcmp
// Target address:  0x152F0
// GOT/IAT slot:    0x15100
// Slot symbol:     off_15100
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

