// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19060
// Name:            .isspace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19060 jmp     cs:off_23E018
//
// Resolved target: isspace
// Target address:  0x243B38
// GOT/IAT slot:    0x23E018
// Slot symbol:     off_23E018
// Target type:     int(int)
// ============================================================

/* see target sig */ .isspace(/* see target signature */)
{
    // Tail-call to isspace via GOT/IAT indirection
    return isspace(/* forwarded args */);
}

