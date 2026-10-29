// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19710
// Name:            .fclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19710 jmp     cs:off_23E370
//
// Resolved target: fclose
// Target address:  0x243EF8
// GOT/IAT slot:    0x23E370
// Slot symbol:     off_23E370
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .fclose(/* see target signature */)
{
    // Tail-call to fclose via GOT/IAT indirection
    return fclose(/* forwarded args */);
}

