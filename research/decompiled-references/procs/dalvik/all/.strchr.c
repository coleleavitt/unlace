// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5120
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5120 jmp     cs:off_1A078
//
// Resolved target: strchr
// Target address:  0x1A400
// GOT/IAT slot:    0x1A078
// Slot symbol:     off_1A078
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

