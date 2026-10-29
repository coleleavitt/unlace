// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1040
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1040 jmp     cs:off_5008
//
// Resolved target: strstr
// Target address:  0x51A8
// GOT/IAT slot:    0x5008
// Slot symbol:     off_5008
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

