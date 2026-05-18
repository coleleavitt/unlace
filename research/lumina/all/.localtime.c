// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19510
// Name:            .localtime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19510 jmp     cs:off_23E270
//
// Resolved target: localtime
// Target address:  0x243DE8
// GOT/IAT slot:    0x23E270
// Slot symbol:     off_23E270
// Target type:     struct tm *(const time_t *timer)
// ============================================================

/* see target sig */ .localtime(/* see target signature */)
{
    // Tail-call to localtime via GOT/IAT indirection
    return localtime(/* forwarded args */);
}

