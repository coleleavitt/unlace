// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19BD0
// Name:            .fgets
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19BD0 jmp     cs:off_23E5D0
//
// Resolved target: fgets
// Target address:  0x244180
// GOT/IAT slot:    0x23E5D0
// Slot symbol:     off_23E5D0
// Target type:     char *(char *s, int n, FILE *stream)
// ============================================================

/* see target sig */ .fgets(/* see target signature */)
{
    // Tail-call to fgets via GOT/IAT indirection
    return fgets(/* forwarded args */);
}

