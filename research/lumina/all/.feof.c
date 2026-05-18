// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19BB0
// Name:            .feof
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19BB0 jmp     cs:off_23E5C0
//
// Resolved target: feof
// Target address:  0x244170
// GOT/IAT slot:    0x23E5C0
// Slot symbol:     off_23E5C0
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .feof(/* see target signature */)
{
    // Tail-call to feof via GOT/IAT indirection
    return feof(/* forwarded args */);
}

