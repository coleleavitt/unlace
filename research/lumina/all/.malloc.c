// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x199E0
// Name:            .malloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x199E0 jmp     cs:off_23E4D8
//
// Resolved target: malloc
// Target address:  0x244068
// GOT/IAT slot:    0x23E4D8
// Slot symbol:     off_23E4D8
// Target type:     void *(size_t size)
// ============================================================

/* see target sig */ .malloc(/* see target signature */)
{
    // Tail-call to malloc via GOT/IAT indirection
    return malloc(/* forwarded args */);
}

