// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19390
// Name:            .localtime_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19390 jmp     cs:off_23E1B0
//
// Resolved target: localtime_r
// Target address:  0x243CF8
// GOT/IAT slot:    0x23E1B0
// Slot symbol:     off_23E1B0
// Target type:     struct tm *(const time_t *timer, struct tm *tp)
// ============================================================

/* see target sig */ .localtime_r(/* see target signature */)
{
    // Tail-call to localtime_r via GOT/IAT indirection
    return localtime_r(/* forwarded args */);
}

