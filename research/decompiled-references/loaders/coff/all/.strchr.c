// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4130
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4130 jmp     cs:off_23080
//
// Resolved target: strchr
// Target address:  0x234A0
// GOT/IAT slot:    0x23080
// Slot symbol:     off_23080
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

