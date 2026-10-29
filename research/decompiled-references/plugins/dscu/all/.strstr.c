// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4080
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4080 jmp     cs:off_1F028
//
// Resolved target: strstr
// Target address:  0x1F2D8
// GOT/IAT slot:    0x1F028
// Slot symbol:     off_1F028
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

