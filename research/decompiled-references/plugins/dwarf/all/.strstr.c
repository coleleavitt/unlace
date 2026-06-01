// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0D0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0D0 jmp     cs:off_CA050
//
// Resolved target: strstr
// Target address:  0xD0970
// GOT/IAT slot:    0xCA050
// Slot symbol:     off_CA050
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

