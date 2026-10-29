// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19590
// Name:            .strtod
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19590 jmp     cs:off_23E2B0
//
// Resolved target: strtod
// Target address:  0x243E28
// GOT/IAT slot:    0x23E2B0
// Slot symbol:     off_23E2B0
// Target type:     double(const char *nptr, char **endptr)
// ============================================================

/* see target sig */ .strtod(/* see target signature */)
{
    // Tail-call to strtod via GOT/IAT indirection
    return strtod(/* forwarded args */);
}

