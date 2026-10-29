// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D220
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D220 jmp     cs:off_B30F8
//
// Resolved target: strlen
// Target address:  0xB3880
// GOT/IAT slot:    0xB30F8
// Slot symbol:     off_B30F8
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

