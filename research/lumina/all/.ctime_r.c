// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x198C0
// Name:            .ctime_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x198C0 jmp     cs:off_23E448
//
// Resolved target: ctime_r
// Target address:  0x243FD0
// GOT/IAT slot:    0x23E448
// Slot symbol:     off_23E448
// Target type:     char *(const time_t *timer, char *buf)
// ============================================================

/* see target sig */ .ctime_r(/* see target signature */)
{
    // Tail-call to ctime_r via GOT/IAT indirection
    return ctime_r(/* forwarded args */);
}

