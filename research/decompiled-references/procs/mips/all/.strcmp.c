// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x199F0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x199F0 jmp     cs:off_754E0
//
// Resolved target: strcmp
// Target address:  0x75D38
// GOT/IAT slot:    0x754E0
// Slot symbol:     off_754E0
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

