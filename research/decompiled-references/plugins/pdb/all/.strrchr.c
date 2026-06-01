// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D6D0
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D6D0 jmp     cs:off_B3350
//
// Resolved target: strrchr
// Target address:  0xB3AF0
// GOT/IAT slot:    0xB3350
// Slot symbol:     off_B3350
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

