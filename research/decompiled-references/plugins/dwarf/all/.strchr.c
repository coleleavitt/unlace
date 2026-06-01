// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1B0
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1B0 jmp     cs:off_CA0C0
//
// Resolved target: strchr
// Target address:  0xD09F0
// GOT/IAT slot:    0xCA0C0
// Slot symbol:     off_CA0C0
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

