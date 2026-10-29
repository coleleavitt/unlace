// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x71B0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x71B0 jmp     cs:off_1D0C0
//
// Resolved target: qvector_reserve
// Target address:  0x1D3F0
// GOT/IAT slot:    0x1D0C0
// Slot symbol:     off_1D0C0
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

