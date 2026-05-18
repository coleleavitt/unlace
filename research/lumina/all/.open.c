// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19500
// Name:            .open
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19500 jmp     cs:off_23E268
//
// Resolved target: open
// Target address:  0x243DE0
// GOT/IAT slot:    0x23E268
// Slot symbol:     off_23E268
// Target type:     int(const char *file, int oflag, ...)
// ============================================================

/* see target sig */ .open(/* see target signature */)
{
    // Tail-call to open via GOT/IAT indirection
    return open(/* forwarded args */);
}

