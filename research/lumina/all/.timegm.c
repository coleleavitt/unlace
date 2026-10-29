// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D00
// Name:            .timegm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D00 jmp     cs:off_23E668
//
// Resolved target: timegm
// Target address:  0x244238
// GOT/IAT slot:    0x23E668
// Slot symbol:     off_23E668
// Target type:     time_t(struct tm *tp)
// ============================================================

/* see target sig */ .timegm(/* see target signature */)
{
    // Tail-call to timegm via GOT/IAT indirection
    return timegm(/* forwarded args */);
}

