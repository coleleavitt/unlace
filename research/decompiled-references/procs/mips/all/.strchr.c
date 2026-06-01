// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191E0
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x191E0 jmp     cs:off_750D8
//
// Resolved target: strchr
// Target address:  0x75928
// GOT/IAT slot:    0x750D8
// Slot symbol:     off_750D8
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

