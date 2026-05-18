// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19650
// Name:            .lseek64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19650 jmp     cs:off_23E310
//
// Resolved target: lseek64
// Target address:  0x243E90
// GOT/IAT slot:    0x23E310
// Slot symbol:     off_23E310
// Target type:     __off64_t(int fd, __off64_t offset, int whence)
// ============================================================

/* see target sig */ .lseek64(/* see target signature */)
{
    // Tail-call to lseek64 via GOT/IAT indirection
    return lseek64(/* forwarded args */);
}

