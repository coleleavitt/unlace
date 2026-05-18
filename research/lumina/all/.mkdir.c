// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x192C0
// Name:            .mkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x192C0 jmp     cs:off_23E148
//
// Resolved target: mkdir
// Target address:  0x243C88
// GOT/IAT slot:    0x23E148
// Slot symbol:     off_23E148
// Target type:     int(const char *path, __mode_t mode)
// ============================================================

/* see target sig */ .mkdir(/* see target signature */)
{
    // Tail-call to mkdir via GOT/IAT indirection
    return mkdir(/* forwarded args */);
}

