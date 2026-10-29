// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B00
// Name:            .dlopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B00 jmp     cs:off_23E568
//
// Resolved target: dlopen
// Target address:  0x244110
// GOT/IAT slot:    0x23E568
// Slot symbol:     off_23E568
// Target type:     void *(const char *file, int mode)
// ============================================================

/* see target sig */ .dlopen(/* see target signature */)
{
    // Tail-call to dlopen via GOT/IAT indirection
    return dlopen(/* forwarded args */);
}

