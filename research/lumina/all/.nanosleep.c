// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191B0
// Name:            .nanosleep
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x191B0 jmp     cs:off_23E0C0
//
// Resolved target: nanosleep
// Target address:  0x243BF8
// GOT/IAT slot:    0x23E0C0
// Slot symbol:     off_23E0C0
// Target type:     int(const struct timespec *requested_time, struct timespec *remaining)
// ============================================================

/* see target sig */ .nanosleep(/* see target signature */)
{
    // Tail-call to nanosleep via GOT/IAT indirection
    return nanosleep(/* forwarded args */);
}

