// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D900
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D900 jmp     cs:off_B3468
//
// Resolved target: strcmp
// Target address:  0xB3C10
// GOT/IAT slot:    0xB3468
// Slot symbol:     off_B3468
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

