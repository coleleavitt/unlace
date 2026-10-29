// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19CB0
// Name:            .setpgid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19CB0 jmp     cs:off_23E640
//
// Resolved target: setpgid
// Target address:  0x2441F0
// GOT/IAT slot:    0x23E640
// Slot symbol:     off_23E640
// Target type:     int(__pid_t pid, __pid_t pgid)
// ============================================================

/* see target sig */ .setpgid(/* see target signature */)
{
    // Tail-call to setpgid via GOT/IAT indirection
    return setpgid(/* forwarded args */);
}

