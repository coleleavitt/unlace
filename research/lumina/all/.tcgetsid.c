// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19520
// Name:            .tcgetsid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19520 jmp     cs:off_23E278
//
// Resolved target: tcgetsid
// Target address:  0x243DF0
// GOT/IAT slot:    0x23E278
// Slot symbol:     off_23E278
// Target type:     __pid_t(int fd)
// ============================================================

/* see target sig */ .tcgetsid(/* see target signature */)
{
    // Tail-call to tcgetsid via GOT/IAT indirection
    return tcgetsid(/* forwarded args */);
}

