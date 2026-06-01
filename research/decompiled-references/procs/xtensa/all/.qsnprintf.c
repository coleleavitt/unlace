// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7260
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7260 jmp     cs:off_1D118
//
// Resolved target: qsnprintf
// Target address:  0x1D448
// GOT/IAT slot:    0x1D118
// Slot symbol:     off_1D118
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

