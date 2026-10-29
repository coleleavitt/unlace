// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64D0
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64D0 jmp     cs:off_2D250
//
// Resolved target: strrchr
// Target address:  0x2D750
// GOT/IAT slot:    0x2D250
// Slot symbol:     off_2D250
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

