// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0
// Name:            .isprint
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0 jmp     cs:off_40B8
//
// Resolved target: isprint
// Target address:  0x5208
// GOT/IAT slot:    0x40B8
// Slot symbol:     off_40B8
// Target type:     int(int)
// ============================================================

/* see target sig */ .isprint(/* see target signature */)
{
    // Tail-call to isprint via GOT/IAT indirection
    return isprint(/* forwarded args */);
}

