// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72D0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72D0 jmp     cs:off_1D150
//
// Resolved target: qvsnprintf
// Target address:  0x1D480
// GOT/IAT slot:    0x1D150
// Slot symbol:     off_1D150
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

