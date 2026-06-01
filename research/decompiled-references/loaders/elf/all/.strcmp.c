// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97C0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x97C0 jmp     cs:off_893C8
//
// Resolved target: strcmp
// Target address:  0x8C6E0
// GOT/IAT slot:    0x893C8
// Slot symbol:     off_893C8
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

