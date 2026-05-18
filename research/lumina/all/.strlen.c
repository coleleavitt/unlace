// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19290
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19290 jmp     cs:off_23E130
//
// Resolved target: strlen
// Target address:  0x243C70
// GOT/IAT slot:    0x23E130
// Slot symbol:     off_23E130
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

