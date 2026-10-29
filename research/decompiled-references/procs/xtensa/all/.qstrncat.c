// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7370
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7370 jmp     cs:off_1D1A0
//
// Resolved target: qstrncat
// Target address:  0x1D4E8
// GOT/IAT slot:    0x1D1A0
// Slot symbol:     off_1D1A0
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

