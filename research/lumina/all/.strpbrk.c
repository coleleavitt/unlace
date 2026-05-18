// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D60
// Name:            .strpbrk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D60 jmp     cs:off_23E698
//
// Resolved target: strpbrk
// Target address:  0x244268
// GOT/IAT slot:    0x23E698
// Slot symbol:     off_23E698
// Target type:     char *(const char *s, const char *accept)
// ============================================================

/* see target sig */ .strpbrk(/* see target signature */)
{
    // Tail-call to strpbrk via GOT/IAT indirection
    return strpbrk(/* forwarded args */);
}

