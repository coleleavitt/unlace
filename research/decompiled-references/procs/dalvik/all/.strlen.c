// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5150
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5150 jmp     cs:off_1A090
//
// Resolved target: strlen
// Target address:  0x1A418
// GOT/IAT slot:    0x1A090
// Slot symbol:     off_1A090
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

