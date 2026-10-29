// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60A0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60A0 jmp     cs:off_8D038
//
// Resolved target: strstr
// Target address:  0x8D5B8
// GOT/IAT slot:    0x8D038
// Slot symbol:     off_8D038
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

