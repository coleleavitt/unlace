// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30C0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30C0 jmp     cs:off_1A048
//
// Resolved target: strlen
// Target address:  0x1A300
// GOT/IAT slot:    0x1A048
// Slot symbol:     off_1A048
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

