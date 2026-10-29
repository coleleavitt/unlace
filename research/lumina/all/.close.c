// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19EC0
// Name:            .close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19EC0 jmp     cs:off_23E748
//
// Resolved target: close
// Target address:  0x244328
// GOT/IAT slot:    0x23E748
// Slot symbol:     off_23E748
// Target type:     int(int fd)
// ============================================================

/* see target sig */ .close(/* see target signature */)
{
    // Tail-call to close via GOT/IAT indirection
    return close(/* forwarded args */);
}

