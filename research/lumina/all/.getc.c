// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191A0
// Name:            .getc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x191A0 jmp     cs:off_23E0B8
//
// Resolved target: getc
// Target address:  0x243BF0
// GOT/IAT slot:    0x23E0B8
// Slot symbol:     off_23E0B8
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .getc(/* see target signature */)
{
    // Tail-call to getc via GOT/IAT indirection
    return getc(/* forwarded args */);
}

