// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3500
// Name:            .feof
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3500 jmp     cs:off_20268
//
// Resolved target: feof
// Target address:  0x21B98
// GOT/IAT slot:    0x20268
// Slot symbol:     off_20268
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .feof(/* see target signature */)
{
    // Tail-call to feof via GOT/IAT indirection
    return feof(/* forwarded args */);
}

