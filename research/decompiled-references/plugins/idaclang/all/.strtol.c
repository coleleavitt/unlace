// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33E0
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33E0 jmp     cs:off_291D8
//
// Resolved target: strtol
// Target address:  0x29590
// GOT/IAT slot:    0x291D8
// Slot symbol:     off_291D8
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

