// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19AD0
// Name:            .tolower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19AD0 jmp     cs:off_23E550
//
// Resolved target: tolower
// Target address:  0x2440F0
// GOT/IAT slot:    0x23E550
// Slot symbol:     off_23E550
// Target type:     int(int c)
// ============================================================

/* see target sig */ .tolower(/* see target signature */)
{
    // Tail-call to tolower via GOT/IAT indirection
    return tolower(/* forwarded args */);
}

