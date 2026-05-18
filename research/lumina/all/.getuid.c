// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19330
// Name:            .getuid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19330 jmp     cs:off_23E180
//
// Resolved target: getuid
// Target address:  0x243CC8
// GOT/IAT slot:    0x23E180
// Slot symbol:     off_23E180
// Target type:     __uid_t(void)
// ============================================================

/* see target sig */ .getuid(/* see target signature */)
{
    // Tail-call to getuid via GOT/IAT indirection
    return getuid(/* forwarded args */);
}

