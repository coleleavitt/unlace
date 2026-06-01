// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5150
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5150 jmp     cs:off_15090
//
// Resolved target: strlen
// Target address:  0x16120
// GOT/IAT slot:    0x15090
// Slot symbol:     off_15090
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

