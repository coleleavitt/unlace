// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3130
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3130 jmp     cs:off_13080
//
// Resolved target: strlen
// Target address:  0x13768
// GOT/IAT slot:    0x13080
// Slot symbol:     off_13080
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

