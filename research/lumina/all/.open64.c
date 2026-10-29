// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D20
// Name:            .open64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D20 jmp     cs:off_23E678
//
// Resolved target: open64
// Target address:  0x244248
// GOT/IAT slot:    0x23E678
// Slot symbol:     off_23E678
// Target type:     int(const char *file, int oflag, ...)
// ============================================================

/* see target sig */ .open64(/* see target signature */)
{
    // Tail-call to open64 via GOT/IAT indirection
    return open64(/* forwarded args */);
}

