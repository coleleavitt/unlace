// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4070
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4070 jmp     cs:off_28020
//
// Resolved target: qalloc_or_throw
// Target address:  0x299B0
// GOT/IAT slot:    0x28020
// Slot symbol:     off_28020
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

