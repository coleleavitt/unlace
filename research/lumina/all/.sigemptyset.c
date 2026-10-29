// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19960
// Name:            .sigemptyset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19960 jmp     cs:off_23E498
//
// Resolved target: sigemptyset
// Target address:  0x244020
// GOT/IAT slot:    0x23E498
// Slot symbol:     off_23E498
// Target type:     int(sigset_t *set)
// ============================================================

/* see target sig */ .sigemptyset(/* see target signature */)
{
    // Tail-call to sigemptyset via GOT/IAT indirection
    return sigemptyset(/* forwarded args */);
}

