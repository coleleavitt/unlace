// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A00
// Name:            .shutdown
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A00 jmp     cs:off_23E4E8
//
// Resolved target: shutdown
// Target address:  0x244080
// GOT/IAT slot:    0x23E4E8
// Slot symbol:     off_23E4E8
// Target type:     int(int fd, int how)
// ============================================================

/* see target sig */ .shutdown(/* see target signature */)
{
    // Tail-call to shutdown via GOT/IAT indirection
    return shutdown(/* forwarded args */);
}

