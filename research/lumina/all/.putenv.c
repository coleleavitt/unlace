// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x197D0
// Name:            .putenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x197D0 jmp     cs:off_23E3D0
//
// Resolved target: putenv
// Target address:  0x243F58
// GOT/IAT slot:    0x23E3D0
// Slot symbol:     off_23E3D0
// Target type:     int(char *string)
// ============================================================

/* see target sig */ .putenv(/* see target signature */)
{
    // Tail-call to putenv via GOT/IAT indirection
    return putenv(/* forwarded args */);
}

