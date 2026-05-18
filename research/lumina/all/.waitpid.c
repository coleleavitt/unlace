// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x195B0
// Name:            .waitpid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x195B0 jmp     cs:off_23E2C0
//
// Resolved target: waitpid
// Target address:  0x243E38
// GOT/IAT slot:    0x23E2C0
// Slot symbol:     off_23E2C0
// Target type:     __pid_t(__pid_t pid, int *stat_loc, int options)
// ============================================================

/* see target sig */ .waitpid(/* see target signature */)
{
    // Tail-call to waitpid via GOT/IAT indirection
    return waitpid(/* forwarded args */);
}

