// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9920
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9920 jmp     cs:off_89478
//
// Resolved target: prev_not_tail
// Target address:  0x8C7A0
// GOT/IAT slot:    0x89478
// Slot symbol:     off_89478
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

