// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19BF0
// Name:            .isalpha
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19BF0 jmp     cs:off_23E5E0
//
// Resolved target: isalpha
// Target address:  0x244190
// GOT/IAT slot:    0x23E5E0
// Slot symbol:     off_23E5E0
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalpha(/* see target signature */)
{
    // Tail-call to isalpha via GOT/IAT indirection
    return isalpha(/* forwarded args */);
}

