// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90B0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90B0 jmp     cs:off_26040
//
// Resolved target: strlen
// Target address:  0x26350
// GOT/IAT slot:    0x26040
// Slot symbol:     off_26040
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

