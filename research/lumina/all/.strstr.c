// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19120
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19120 jmp     cs:off_23E078
//
// Resolved target: strstr
// Target address:  0x243BA0
// GOT/IAT slot:    0x23E078
// Slot symbol:     off_23E078
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

