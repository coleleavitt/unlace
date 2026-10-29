// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4220
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4220 jmp     cs:off_280F8
//
// Resolved target: strncmp
// Target address:  0x29A90
// GOT/IAT slot:    0x280F8
// Slot symbol:     off_280F8
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

