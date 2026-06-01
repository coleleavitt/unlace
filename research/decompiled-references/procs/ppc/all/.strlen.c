// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20300
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20300 jmp     cs:off_95168
//
// Resolved target: strlen
// Target address:  0x95BA0
// GOT/IAT slot:    0x95168
// Slot symbol:     off_95168
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

