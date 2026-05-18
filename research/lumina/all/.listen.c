// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19850
// Name:            .listen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19850 jmp     cs:off_23E410
//
// Resolved target: listen
// Target address:  0x243F98
// GOT/IAT slot:    0x23E410
// Slot symbol:     off_23E410
// Target type:     int(int fd, int n)
// ============================================================

/* see target sig */ .listen(/* see target signature */)
{
    // Tail-call to listen via GOT/IAT indirection
    return listen(/* forwarded args */);
}

