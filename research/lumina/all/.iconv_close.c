// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x195D0
// Name:            .iconv_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x195D0 jmp     cs:off_23E2D0
//
// Resolved target: iconv_close
// Target address:  0x243E48
// GOT/IAT slot:    0x23E2D0
// Slot symbol:     off_23E2D0
// Target type:     int(iconv_t cd)
// ============================================================

/* see target sig */ .iconv_close(/* see target signature */)
{
    // Tail-call to iconv_close via GOT/IAT indirection
    return iconv_close(/* forwarded args */);
}

