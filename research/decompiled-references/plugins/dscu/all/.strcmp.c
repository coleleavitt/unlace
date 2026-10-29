// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4370
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4370 jmp     cs:off_1F1A0
//
// Resolved target: strcmp
// Target address:  0x1F458
// GOT/IAT slot:    0x1F1A0
// Slot symbol:     off_1F1A0
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

