// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B70
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B70 jmp     cs:off_955A0
//
// Resolved target: strtol
// Target address:  0x95FE0
// GOT/IAT slot:    0x955A0
// Slot symbol:     off_955A0
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

