// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3250
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3250 jmp     cs:off_1A110
//
// Resolved target: strrchr
// Target address:  0x1A3C8
// GOT/IAT slot:    0x1A110
// Slot symbol:     off_1A110
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

