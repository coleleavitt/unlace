// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40E0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40E0 jmp     cs:off_1F058
//
// Resolved target: strlen
// Target address:  0x1F308
// GOT/IAT slot:    0x1F058
// Slot symbol:     off_1F058
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

