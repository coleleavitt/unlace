// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F0 jmp     cs:off_A060
//
// Resolved target: strlen
// Target address:  0xA290
// GOT/IAT slot:    0xA060
// Slot symbol:     off_A060
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

