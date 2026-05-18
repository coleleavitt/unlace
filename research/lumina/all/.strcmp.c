// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A40
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A40 jmp     cs:off_23E508
//
// Resolved target: strcmp
// Target address:  0x2440A0
// GOT/IAT slot:    0x23E508
// Slot symbol:     off_23E508
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

