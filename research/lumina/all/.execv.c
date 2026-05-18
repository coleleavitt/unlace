// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x196A0
// Name:            .execv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x196A0 jmp     cs:off_23E338
//
// Resolved target: execv
// Target address:  0x243EB8
// GOT/IAT slot:    0x23E338
// Slot symbol:     off_23E338
// Target type:     int(const char *path, char *const argv[])
// ============================================================

/* see target sig */ .execv(/* see target signature */)
{
    // Tail-call to execv via GOT/IAT indirection
    return execv(/* forwarded args */);
}

