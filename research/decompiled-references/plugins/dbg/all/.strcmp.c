// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34C0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34C0 jmp     cs:off_13248
//
// Resolved target: strcmp
// Target address:  0x135D0
// GOT/IAT slot:    0x13248
// Slot symbol:     off_13248
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

