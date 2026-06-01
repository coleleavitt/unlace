// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2200
// Name:            .malloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2200 jmp     cs:off_150E8
//
// Resolved target: malloc
// Target address:  0x152D8
// GOT/IAT slot:    0x150E8
// Slot symbol:     off_150E8
// Target type:     void *(size_t size)
// ============================================================

/* see target sig */ .malloc(/* see target signature */)
{
    // Tail-call to malloc via GOT/IAT indirection
    return malloc(/* forwarded args */);
}

