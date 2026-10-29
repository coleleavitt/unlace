// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19E50
// Name:            .toupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19E50 jmp     cs:off_23E710
//
// Resolved target: toupper
// Target address:  0x2442E0
// GOT/IAT slot:    0x23E710
// Slot symbol:     off_23E710
// Target type:     int(int c)
// ============================================================

/* see target sig */ .toupper(/* see target signature */)
{
    // Tail-call to toupper via GOT/IAT indirection
    return toupper(/* forwarded args */);
}

