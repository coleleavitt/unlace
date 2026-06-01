// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61A0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61A0 jmp     cs:off_8D0B8
//
// Resolved target: strlen
// Target address:  0x8D638
// GOT/IAT slot:    0x8D0B8
// Slot symbol:     off_8D0B8
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

