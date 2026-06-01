// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1060
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1060 jmp     cs:off_5018
//
// Resolved target: strchr
// Target address:  0x5260
// GOT/IAT slot:    0x5018
// Slot symbol:     off_5018
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

