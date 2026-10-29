// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19DB0
// Name:            .umask
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19DB0 jmp     cs:off_23E6C0
//
// Resolved target: umask
// Target address:  0x244290
// GOT/IAT slot:    0x23E6C0
// Slot symbol:     off_23E6C0
// Target type:     __mode_t(__mode_t mask)
// ============================================================

/* see target sig */ .umask(/* see target signature */)
{
    // Tail-call to umask via GOT/IAT indirection
    return umask(/* forwarded args */);
}

