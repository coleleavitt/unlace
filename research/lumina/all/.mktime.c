// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x194A0
// Name:            .mktime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x194A0 jmp     cs:off_23E238
//
// Resolved target: mktime
// Target address:  0x243DA8
// GOT/IAT slot:    0x23E238
// Slot symbol:     off_23E238
// Target type:     time_t(struct tm *tp)
// ============================================================

/* see target sig */ .mktime(/* see target signature */)
{
    // Tail-call to mktime via GOT/IAT indirection
    return mktime(/* forwarded args */);
}

