// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20150
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20150 jmp     cs:off_95090
//
// Resolved target: strstr
// Target address:  0x95AC0
// GOT/IAT slot:    0x95090
// Slot symbol:     off_95090
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

