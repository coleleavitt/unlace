// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B60
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B60 jmp     cs:off_95598
//
// Resolved target: strcmp
// Target address:  0x95FD8
// GOT/IAT slot:    0x95598
// Slot symbol:     off_95598
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

