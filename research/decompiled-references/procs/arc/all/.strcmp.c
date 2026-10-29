// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8690
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8690 jmp     cs:off_2A330
//
// Resolved target: strcmp
// Target address:  0x2BD48
// GOT/IAT slot:    0x2A330
// Slot symbol:     off_2A330
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

