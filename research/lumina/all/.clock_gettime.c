// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19690
// Name:            .clock_gettime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19690 jmp     cs:off_23E330
//
// Resolved target: clock_gettime
// Target address:  0x243EB0
// GOT/IAT slot:    0x23E330
// Slot symbol:     off_23E330
// Target type:     int(clockid_t clock_id, struct timespec *tp)
// ============================================================

/* see target sig */ .clock_gettime(/* see target signature */)
{
    // Tail-call to clock_gettime via GOT/IAT indirection
    return clock_gettime(/* forwarded args */);
}

