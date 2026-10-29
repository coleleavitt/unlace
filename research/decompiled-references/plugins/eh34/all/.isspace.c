// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6040
// Name:            .isspace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6040 jmp     cs:off_8D008
//
// Resolved target: isspace
// Target address:  0x8D588
// GOT/IAT slot:    0x8D008
// Slot symbol:     off_8D008
// Target type:     int(int)
// ============================================================

/* see target sig */ .isspace(/* see target signature */)
{
    // Tail-call to isspace via GOT/IAT indirection
    return isspace(/* forwarded args */);
}

