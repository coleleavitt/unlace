// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A50
// Name:            .getrlimit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A50 jmp     cs:off_23E510
//
// Resolved target: getrlimit
// Target address:  0x2440A8
// GOT/IAT slot:    0x23E510
// Slot symbol:     off_23E510
// Target type:     int(__rlimit_resource_t resource, struct rlimit *rlimits)
// ============================================================

/* see target sig */ .getrlimit(/* see target signature */)
{
    // Tail-call to getrlimit via GOT/IAT indirection
    return getrlimit(/* forwarded args */);
}

