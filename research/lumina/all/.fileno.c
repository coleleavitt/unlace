// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19790
// Name:            .fileno
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19790 jmp     cs:off_23E3B0
//
// Resolved target: fileno
// Target address:  0x243F38
// GOT/IAT slot:    0x23E3B0
// Slot symbol:     off_23E3B0
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .fileno(/* see target signature */)
{
    // Tail-call to fileno via GOT/IAT indirection
    return fileno(/* forwarded args */);
}

