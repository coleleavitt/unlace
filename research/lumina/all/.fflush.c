// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x198D0
// Name:            .fflush
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x198D0 jmp     cs:off_23E450
//
// Resolved target: fflush
// Target address:  0x243FD8
// GOT/IAT slot:    0x23E450
// Slot symbol:     off_23E450
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .fflush(/* see target signature */)
{
    // Tail-call to fflush via GOT/IAT indirection
    return fflush(/* forwarded args */);
}

