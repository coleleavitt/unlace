// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3140
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3140 jmp     cs:off_29088
//
// Resolved target: strlen
// Target address:  0x29438
// GOT/IAT slot:    0x29088
// Slot symbol:     off_29088
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

