// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7140
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7140 jmp     cs:off_1D088
//
// Resolved target: set_cmt
// Target address:  0x1D3B8
// GOT/IAT slot:    0x1D088
// Slot symbol:     off_1D088
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

