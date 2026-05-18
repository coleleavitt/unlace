// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19AF0
// Name:            .getpid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19AF0 jmp     cs:off_23E560
//
// Resolved target: getpid
// Target address:  0x244108
// GOT/IAT slot:    0x23E560
// Slot symbol:     off_23E560
// Target type:     __pid_t(void)
// ============================================================

/* see target sig */ .getpid(/* see target signature */)
{
    // Tail-call to getpid via GOT/IAT indirection
    return getpid(/* forwarded args */);
}

