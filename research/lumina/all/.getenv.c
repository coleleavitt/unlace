// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19930
// Name:            .getenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19930 jmp     cs:off_23E480
//
// Resolved target: getenv
// Target address:  0x244008
// GOT/IAT slot:    0x23E480
// Slot symbol:     off_23E480
// Target type:     char *(const char *name)
// ============================================================

/* see target sig */ .getenv(/* see target signature */)
{
    // Tail-call to getenv via GOT/IAT indirection
    return getenv(/* forwarded args */);
}

