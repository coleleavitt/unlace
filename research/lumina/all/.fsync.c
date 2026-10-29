// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19660
// Name:            .fsync
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19660 jmp     cs:off_23E318
//
// Resolved target: fsync
// Target address:  0x243E98
// GOT/IAT slot:    0x23E318
// Slot symbol:     off_23E318
// Target type:     int(int fd)
// ============================================================

/* see target sig */ .fsync(/* see target signature */)
{
    // Tail-call to fsync via GOT/IAT indirection
    return fsync(/* forwarded args */);
}

