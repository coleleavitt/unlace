// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3620
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3620 jmp     cs:off_282F8
//
// Resolved target: strcmp
// Target address:  0x287B0
// GOT/IAT slot:    0x282F8
// Slot symbol:     off_282F8
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

