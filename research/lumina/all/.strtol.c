// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A60
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A60 jmp     cs:off_23E518
//
// Resolved target: strtol
// Target address:  0x2440B0
// GOT/IAT slot:    0x23E518
// Slot symbol:     off_23E518
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

