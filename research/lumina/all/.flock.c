// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19E70
// Name:            .flock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19E70 jmp     cs:off_23E720
//
// Resolved target: flock
// Target address:  0x2442F8
// GOT/IAT slot:    0x23E720
// Slot symbol:     off_23E720
// Target type:     int(int fd, int operation)
// ============================================================

/* see target sig */ .flock(/* see target signature */)
{
    // Tail-call to flock via GOT/IAT indirection
    return flock(/* forwarded args */);
}

