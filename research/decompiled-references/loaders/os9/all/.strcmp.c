// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180 jmp     cs:off_40A8
//
// Resolved target: strcmp
// Target address:  0x41C8
// GOT/IAT slot:    0x40A8
// Slot symbol:     off_40A8
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

