// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x198A0
// Name:            .getpwuid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x198A0 jmp     cs:off_23E438
//
// Resolved target: getpwuid
// Target address:  0x243FC0
// GOT/IAT slot:    0x23E438
// Slot symbol:     off_23E438
// Target type:     struct passwd *(__uid_t uid)
// ============================================================

/* see target sig */ .getpwuid(/* see target signature */)
{
    // Tail-call to getpwuid via GOT/IAT indirection
    return getpwuid(/* forwarded args */);
}

