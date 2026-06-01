// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3170
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3170 jmp     cs:off_140A0
//
// Resolved target: strlen
// Target address:  0x14688
// GOT/IAT slot:    0x140A0
// Slot symbol:     off_140A0
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

