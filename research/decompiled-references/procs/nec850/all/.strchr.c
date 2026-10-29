// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9160
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9160 jmp     cs:off_2E098
//
// Resolved target: strchr
// Target address:  0x2E708
// GOT/IAT slot:    0x2E098
// Slot symbol:     off_2E098
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

