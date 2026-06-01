// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4220
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4220 jmp     cs:off_4E0F8
//
// Resolved target: strlen
// Target address:  0x4F700
// GOT/IAT slot:    0x4E0F8
// Slot symbol:     off_4E0F8
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

