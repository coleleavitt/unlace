// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA270
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA270 jmp     cs:off_CA120
//
// Resolved target: strlen
// Target address:  0xD0A50
// GOT/IAT slot:    0xCA120
// Slot symbol:     off_CA120
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

