// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x85C0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x85C0 jmp     cs:off_2A2C8
//
// Resolved target: strcmp
// Target address:  0x2A840
// GOT/IAT slot:    0x2A2C8
// Slot symbol:     off_2A2C8
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

