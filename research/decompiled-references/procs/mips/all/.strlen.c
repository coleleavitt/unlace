// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19280
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19280 jmp     cs:off_75128
//
// Resolved target: strlen
// Target address:  0x75978
// GOT/IAT slot:    0x75128
// Slot symbol:     off_75128
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

