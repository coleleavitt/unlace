// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA790
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA790 jmp     cs:off_CA3B0
//
// Resolved target: strrchr
// Target address:  0xD0CE8
// GOT/IAT slot:    0xCA3B0
// Slot symbol:     off_CA3B0
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

