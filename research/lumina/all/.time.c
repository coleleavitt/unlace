// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x196B0
// Name:            .time
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x196B0 jmp     cs:off_23E340
//
// Resolved target: time
// Target address:  0x243EC0
// GOT/IAT slot:    0x23E340
// Slot symbol:     off_23E340
// Target type:     time_t(time_t *timer)
// ============================================================

/* see target sig */ .time(/* see target signature */)
{
    // Tail-call to time via GOT/IAT indirection
    return time(/* forwarded args */);
}

