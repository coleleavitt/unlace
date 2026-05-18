// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B20
// Name:            .chdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B20 jmp     cs:off_23E578
//
// Resolved target: chdir
// Target address:  0x244120
// GOT/IAT slot:    0x23E578
// Slot symbol:     off_23E578
// Target type:     int(const char *path)
// ============================================================

/* see target sig */ .chdir(/* see target signature */)
{
    // Tail-call to chdir via GOT/IAT indirection
    return chdir(/* forwarded args */);
}

