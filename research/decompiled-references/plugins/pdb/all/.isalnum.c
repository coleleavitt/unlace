// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D640
// Name:            .isalnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D640 jmp     cs:off_B3308
//
// Resolved target: isalnum
// Target address:  0xB3AA8
// GOT/IAT slot:    0xB3308
// Slot symbol:     off_B3308
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalnum(/* see target signature */)
{
    // Tail-call to isalnum via GOT/IAT indirection
    return isalnum(/* forwarded args */);
}

