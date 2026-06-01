// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3160
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3160 jmp     cs:off_13098
//
// Resolved target: strlen
// Target address:  0x13410
// GOT/IAT slot:    0x13098
// Slot symbol:     off_13098
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

