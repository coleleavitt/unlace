// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x198E0
// Name:            .fopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x198E0 jmp     cs:off_23E458
//
// Resolved target: fopen
// Target address:  0x243FE0
// GOT/IAT slot:    0x23E458
// Slot symbol:     off_23E458
// Target type:     FILE *(const char *filename, const char *modes)
// ============================================================

/* see target sig */ .fopen(/* see target signature */)
{
    // Tail-call to fopen via GOT/IAT indirection
    return fopen(/* forwarded args */);
}

