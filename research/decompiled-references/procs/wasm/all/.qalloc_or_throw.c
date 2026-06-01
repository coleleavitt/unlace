// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9040
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9040 jmp     cs:off_26008
//
// Resolved target: qalloc_or_throw
// Target address:  0x26318
// GOT/IAT slot:    0x26008
// Slot symbol:     off_26008
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

