// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60A0
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60A0 jmp     cs:off_2F038
//
// Resolved target: qalloc_or_throw
// Target address:  0x2F6A8
// GOT/IAT slot:    0x2F038
// Slot symbol:     off_2F038
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

