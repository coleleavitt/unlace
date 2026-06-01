// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16DB0
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16DB0 jmp     cs:off_4F6C0
//
// Resolved target: strncmp
// Target address:  0x509C8
// GOT/IAT slot:    0x4F6C0
// Slot symbol:     off_4F6C0
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

