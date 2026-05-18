// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19230
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19230 jmp     cs:off_23E100
//
// Resolved target: strchr
// Target address:  0x243C38
// GOT/IAT slot:    0x23E100
// Slot symbol:     off_23E100
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

