// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34A0
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34A0 jmp     cs:off_28238
//
// Resolved target: strrchr
// Target address:  0x286E8
// GOT/IAT slot:    0x28238
// Slot symbol:     off_28238
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

