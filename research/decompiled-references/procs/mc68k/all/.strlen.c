// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6180
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6180 jmp     cs:off_1D0A8
//
// Resolved target: strlen
// Target address:  0x1D598
// GOT/IAT slot:    0x1D0A8
// Slot symbol:     off_1D0A8
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

