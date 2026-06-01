// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7050
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7050 jmp     cs:off_1D010
//
// Resolved target: qalloc_or_throw
// Target address:  0x1D340
// GOT/IAT slot:    0x1D010
// Slot symbol:     off_1D010
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

