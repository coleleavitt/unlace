// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19740
// Name:            .isalnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19740 jmp     cs:off_23E388
//
// Resolved target: isalnum
// Target address:  0x243F10
// GOT/IAT slot:    0x23E388
// Slot symbol:     off_23E388
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalnum(/* see target signature */)
{
    // Tail-call to isalnum via GOT/IAT indirection
    return isalnum(/* forwarded args */);
}

