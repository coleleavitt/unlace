// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16F80
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16F80 jmp     cs:off_4F7A8
//
// Resolved target: qalloc_or_throw
// Target address:  0x50BB8
// GOT/IAT slot:    0x4F7A8
// Slot symbol:     off_4F7A8
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

