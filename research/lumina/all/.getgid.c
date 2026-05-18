// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x197B0
// Name:            .getgid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x197B0 jmp     cs:off_23E3C0
//
// Resolved target: getgid
// Target address:  0x243F48
// GOT/IAT slot:    0x23E3C0
// Slot symbol:     off_23E3C0
// Target type:     __gid_t(void)
// ============================================================

/* see target sig */ .getgid(/* see target signature */)
{
    // Tail-call to getgid via GOT/IAT indirection
    return getgid(/* forwarded args */);
}

