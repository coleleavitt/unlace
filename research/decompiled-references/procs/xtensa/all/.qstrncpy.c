// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7400
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7400 jmp     cs:off_1D1E8
//
// Resolved target: qstrncpy
// Target address:  0x1D530
// GOT/IAT slot:    0x1D1E8
// Slot symbol:     off_1D1E8
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

