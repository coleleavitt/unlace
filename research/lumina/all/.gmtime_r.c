// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19EE0
// Name:            .gmtime_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19EE0 jmp     cs:off_23E758
//
// Resolved target: gmtime_r
// Target address:  0x244340
// GOT/IAT slot:    0x23E758
// Slot symbol:     off_23E758
// Target type:     struct tm *(const time_t *timer, struct tm *tp)
// ============================================================

/* see target sig */ .gmtime_r(/* see target signature */)
{
    // Tail-call to gmtime_r via GOT/IAT indirection
    return gmtime_r(/* forwarded args */);
}

