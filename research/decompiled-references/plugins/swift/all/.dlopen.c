// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4650
// Name:            .dlopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4650 jmp     cs:off_28310
//
// Resolved target: dlopen
// Target address:  0x29CB8
// GOT/IAT slot:    0x28310
// Slot symbol:     off_28310
// Target type:     void *(const char *file, int mode)
// ============================================================

/* see target sig */ .dlopen(/* see target signature */)
{
    // Tail-call to dlopen via GOT/IAT indirection
    return dlopen(/* forwarded args */);
}

