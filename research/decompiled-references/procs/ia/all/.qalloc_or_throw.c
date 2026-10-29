// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7030
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7030 jmp     cs:off_26000
//
// Resolved target: qalloc_or_throw
// Target address:  0x262B8
// GOT/IAT slot:    0x26000
// Slot symbol:     off_26000
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

