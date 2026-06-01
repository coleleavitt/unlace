// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2080
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2080 jmp     cs:off_7028
//
// Resolved target: strchr
// Target address:  0x7158
// GOT/IAT slot:    0x7028
// Slot symbol:     off_7028
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

