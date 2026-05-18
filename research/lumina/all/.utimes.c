// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x194C0
// Name:            .utimes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x194C0 jmp     cs:off_23E248
//
// Resolved target: utimes
// Target address:  0x243DB8
// GOT/IAT slot:    0x23E248
// Slot symbol:     off_23E248
// Target type:     int(const char *file, const struct timeval tvp[2])
// ============================================================

/* see target sig */ .utimes(/* see target signature */)
{
    // Tail-call to utimes via GOT/IAT indirection
    return utimes(/* forwarded args */);
}

