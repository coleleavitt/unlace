// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19BC0
// Name:            .fnmatch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19BC0 jmp     cs:off_23E5C8
//
// Resolved target: fnmatch
// Target address:  0x244178
// GOT/IAT slot:    0x23E5C8
// Slot symbol:     off_23E5C8
// Target type:     int(const char *pattern, const char *name, int flags)
// ============================================================

/* see target sig */ .fnmatch(/* see target signature */)
{
    // Tail-call to fnmatch via GOT/IAT indirection
    return fnmatch(/* forwarded args */);
}

