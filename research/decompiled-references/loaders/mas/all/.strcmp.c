// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120 jmp     cs:off_4078
//
// Resolved target: strcmp
// Target address:  0x4598
// GOT/IAT slot:    0x4078
// Slot symbol:     off_4078
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

