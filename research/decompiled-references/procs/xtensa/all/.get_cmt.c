// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7230
// Name:            .get_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7230 jmp     cs:off_1D100
//
// Resolved target: get_cmt
// Target address:  0x1D430
// GOT/IAT slot:    0x1D100
// Slot symbol:     off_1D100
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .get_cmt(/* see target signature */)
{
    // Tail-call to get_cmt via GOT/IAT indirection
    return get_cmt(/* forwarded args */);
}

