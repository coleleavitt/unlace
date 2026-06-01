// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42D0
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42D0 jmp     cs:off_1F150
//
// Resolved target: strrchr
// Target address:  0x1F400
// GOT/IAT slot:    0x1F150
// Slot symbol:     off_1F150
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

