// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x197C0
// Name:            .readlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x197C0 jmp     cs:off_23E3C8
//
// Resolved target: readlink
// Target address:  0x243F50
// GOT/IAT slot:    0x23E3C8
// Slot symbol:     off_23E3C8
// Target type:     ssize_t(const char *path, char *buf, size_t len)
// ============================================================

/* see target sig */ .readlink(/* see target signature */)
{
    // Tail-call to readlink via GOT/IAT indirection
    return readlink(/* forwarded args */);
}

