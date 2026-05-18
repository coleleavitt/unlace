// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x195A0
// Name:            .execvp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x195A0 jmp     cs:off_23E2B8
//
// Resolved target: execvp
// Target address:  0x243E30
// GOT/IAT slot:    0x23E2B8
// Slot symbol:     off_23E2B8
// Target type:     int(const char *file, char *const argv[])
// ============================================================

/* see target sig */ .execvp(/* see target signature */)
{
    // Tail-call to execvp via GOT/IAT indirection
    return execvp(/* forwarded args */);
}

