// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22B0
// Name:            .feof
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22B0 jmp     cs:off_8140
//
// Resolved target: feof
// Target address:  0x8830
// GOT/IAT slot:    0x8140
// Slot symbol:     off_8140
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .feof(/* see target signature */)
{
    // Tail-call to feof via GOT/IAT indirection
    return feof(/* forwarded args */);
}

