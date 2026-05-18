// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C20
// Name:            .gettimeofday
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C20 jmp     cs:off_23E5F8
//
// Resolved target: gettimeofday
// Target address:  0x2441A8
// GOT/IAT slot:    0x23E5F8
// Slot symbol:     off_23E5F8
// Target type:     int(struct timeval *tv, __timezone_ptr_t tz)
// ============================================================

/* see target sig */ .gettimeofday(/* see target signature */)
{
    // Tail-call to gettimeofday via GOT/IAT indirection
    return gettimeofday(/* forwarded args */);
}

