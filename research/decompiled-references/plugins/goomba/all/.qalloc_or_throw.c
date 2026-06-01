// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40D0
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40D0 jmp     cs:off_4E050
//
// Resolved target: qalloc_or_throw
// Target address:  0x4F650
// GOT/IAT slot:    0x4E050
// Slot symbol:     off_4E050
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

