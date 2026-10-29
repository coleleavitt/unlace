// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6140
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6140 jmp     cs:off_8D088
//
// Resolved target: strchr
// Target address:  0x8D608
// GOT/IAT slot:    0x8D088
// Slot symbol:     off_8D088
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

