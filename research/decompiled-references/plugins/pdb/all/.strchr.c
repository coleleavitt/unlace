// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D180
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D180 jmp     cs:off_B30A8
//
// Resolved target: strchr
// Target address:  0xB3830
// GOT/IAT slot:    0xB30A8
// Slot symbol:     off_B30A8
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

