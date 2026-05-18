// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19810
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19810 jmp     cs:off_23E3F0
//
// Resolved target: strrchr
// Target address:  0x243F78
// GOT/IAT slot:    0x23E3F0
// Slot symbol:     off_23E3F0
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

