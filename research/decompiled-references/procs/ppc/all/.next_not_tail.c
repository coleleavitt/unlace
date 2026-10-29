// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20950
// Name:            .next_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20950 jmp     cs:off_95490
//
// Resolved target: next_not_tail
// Target address:  0x95EC8
// GOT/IAT slot:    0x95490
// Slot symbol:     off_95490
// Target type:     <no type info>
// ============================================================

void .next_not_tail(/* see target signature */)
{
    // Tail-call to next_not_tail via GOT/IAT indirection
    return next_not_tail(/* forwarded args */);
}

