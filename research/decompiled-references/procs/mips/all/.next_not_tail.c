// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x197E0
// Name:            .next_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x197E0 jmp     cs:off_753D8
//
// Resolved target: next_not_tail
// Target address:  0x75C28
// GOT/IAT slot:    0x753D8
// Slot symbol:     off_753D8
// Target type:     <no type info>
// ============================================================

void .next_not_tail(/* see target signature */)
{
    // Tail-call to next_not_tail via GOT/IAT indirection
    return next_not_tail(/* forwarded args */);
}

