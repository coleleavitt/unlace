// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x197A0
// Name:            .fdopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x197A0 jmp     cs:off_23E3B8
//
// Resolved target: fdopen
// Target address:  0x243F40
// GOT/IAT slot:    0x23E3B8
// Slot symbol:     off_23E3B8
// Target type:     FILE *(int fd, const char *modes)
// ============================================================

/* see target sig */ .fdopen(/* see target signature */)
{
    // Tail-call to fdopen via GOT/IAT indirection
    return fdopen(/* forwarded args */);
}

