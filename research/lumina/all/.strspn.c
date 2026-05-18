// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19260
// Name:            .strspn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19260 jmp     cs:off_23E118
//
// Resolved target: strspn
// Target address:  0x243C50
// GOT/IAT slot:    0x23E118
// Slot symbol:     off_23E118
// Target type:     size_t(const char *s, const char *accept)
// ============================================================

/* see target sig */ .strspn(/* see target signature */)
{
    // Tail-call to strspn via GOT/IAT indirection
    return strspn(/* forwarded args */);
}

