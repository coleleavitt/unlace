// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9700
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9700 jmp     cs:off_2E368
//
// Resolved target: strcmp
// Target address:  0x2E9E0
// GOT/IAT slot:    0x2E368
// Slot symbol:     off_2E368
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

