// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6810
// Name:            .ferror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6810 jmp     cs:off_2D3F0
//
// Resolved target: ferror
// Target address:  0x2D910
// GOT/IAT slot:    0x2D3F0
// Slot symbol:     off_2D3F0
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .ferror(/* see target signature */)
{
    // Tail-call to ferror via GOT/IAT indirection
    return ferror(/* forwarded args */);
}

