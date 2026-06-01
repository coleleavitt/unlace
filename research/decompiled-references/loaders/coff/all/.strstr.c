// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40A0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40A0 jmp     cs:off_23038
//
// Resolved target: strstr
// Target address:  0x23458
// GOT/IAT slot:    0x23038
// Slot symbol:     off_23038
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

