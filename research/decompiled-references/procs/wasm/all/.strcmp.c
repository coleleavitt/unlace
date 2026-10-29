// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9320
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9320 jmp     cs:off_26178
//
// Resolved target: strcmp
// Target address:  0x26490
// GOT/IAT slot:    0x26178
// Slot symbol:     off_26178
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

