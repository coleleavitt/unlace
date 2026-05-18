// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19AB0
// Name:            .read
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19AB0 jmp     cs:off_23E540
//
// Resolved target: read
// Target address:  0x2440E0
// GOT/IAT slot:    0x23E540
// Slot symbol:     off_23E540
// Target type:     ssize_t(int fd, void *buf, size_t nbytes)
// ============================================================

/* see target sig */ .read(/* see target signature */)
{
    // Tail-call to read via GOT/IAT indirection
    return read(/* forwarded args */);
}

