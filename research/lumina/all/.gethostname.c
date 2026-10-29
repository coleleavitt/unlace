// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B60
// Name:            .gethostname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B60 jmp     cs:off_23E598
//
// Resolved target: gethostname
// Target address:  0x244148
// GOT/IAT slot:    0x23E598
// Slot symbol:     off_23E598
// Target type:     int(char *name, size_t len)
// ============================================================

/* see target sig */ .gethostname(/* see target signature */)
{
    // Tail-call to gethostname via GOT/IAT indirection
    return gethostname(/* forwarded args */);
}

