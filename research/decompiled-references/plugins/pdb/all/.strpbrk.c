// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DB00
// Name:            .strpbrk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DB00 jmp     cs:off_B3568
//
// Resolved target: strpbrk
// Target address:  0xB3D38
// GOT/IAT slot:    0xB3568
// Slot symbol:     off_B3568
// Target type:     char *(const char *s, const char *accept)
// ============================================================

/* see target sig */ .strpbrk(/* see target signature */)
{
    // Tail-call to strpbrk via GOT/IAT indirection
    return strpbrk(/* forwarded args */);
}

