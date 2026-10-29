// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x195E0
// Name:            .strftime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x195E0 jmp     cs:off_23E2D8
//
// Resolved target: strftime
// Target address:  0x243E50
// GOT/IAT slot:    0x23E2D8
// Slot symbol:     off_23E2D8
// Target type:     size_t(char *s, size_t maxsize, const char *format, const struct tm *tp)
// ============================================================

/* see target sig */ .strftime(/* see target signature */)
{
    // Tail-call to strftime via GOT/IAT indirection
    return strftime(/* forwarded args */);
}

