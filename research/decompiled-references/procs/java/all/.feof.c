// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6680
// Name:            .feof
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6680 jmp     cs:off_2D328
//
// Resolved target: feof
// Target address:  0x2D838
// GOT/IAT slot:    0x2D328
// Slot symbol:     off_2D328
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .feof(/* see target signature */)
{
    // Tail-call to feof via GOT/IAT indirection
    return feof(/* forwarded args */);
}

