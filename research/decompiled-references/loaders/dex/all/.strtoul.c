// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3150
// Name:            .strtoul
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3150 jmp     cs:off_28090
//
// Resolved target: strtoul
// Target address:  0x28540
// GOT/IAT slot:    0x28090
// Slot symbol:     off_28090
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoul(/* see target signature */)
{
    // Tail-call to strtoul via GOT/IAT indirection
    return strtoul(/* forwarded args */);
}

