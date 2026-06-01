// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6750
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6750 jmp     cs:off_2D390
//
// Resolved target: prev_not_tail
// Target address:  0x2D8A8
// GOT/IAT slot:    0x2D390
// Slot symbol:     off_2D390
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

