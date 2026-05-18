// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19440
// Name:            .rename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19440 jmp     cs:off_23E208
//
// Resolved target: rename
// Target address:  0x243D78
// GOT/IAT slot:    0x23E208
// Slot symbol:     off_23E208
// Target type:     int(const char *old, const char *new)
// ============================================================

/* see target sig */ .rename(/* see target signature */)
{
    // Tail-call to rename via GOT/IAT indirection
    return rename(/* forwarded args */);
}

