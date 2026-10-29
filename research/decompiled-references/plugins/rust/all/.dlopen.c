// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22D0
// Name:            .dlopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22D0 jmp     cs:off_A150
//
// Resolved target: dlopen
// Target address:  0xB430
// GOT/IAT slot:    0xA150
// Slot symbol:     off_A150
// Target type:     void *(const char *file, int mode)
// ============================================================

/* see target sig */ .dlopen(/* see target signature */)
{
    // Tail-call to dlopen via GOT/IAT indirection
    return dlopen(/* forwarded args */);
}

