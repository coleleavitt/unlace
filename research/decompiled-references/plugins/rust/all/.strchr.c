// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2080
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2080 jmp     cs:off_A028
//
// Resolved target: strchr
// Target address:  0xB2F8
// GOT/IAT slot:    0xA028
// Slot symbol:     off_A028
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

