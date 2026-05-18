// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D80
// Name:            .isprint
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D80 jmp     cs:off_23E6A8
//
// Resolved target: isprint
// Target address:  0x244278
// GOT/IAT slot:    0x23E6A8
// Slot symbol:     off_23E6A8
// Target type:     int(int)
// ============================================================

/* see target sig */ .isprint(/* see target signature */)
{
    // Tail-call to isprint via GOT/IAT indirection
    return isprint(/* forwarded args */);
}

