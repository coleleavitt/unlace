// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x98C0
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x98C0 jmp     cs:off_2E448
//
// Resolved target: prev_not_tail
// Target address:  0x2EAD0
// GOT/IAT slot:    0x2E448
// Slot symbol:     off_2E448
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

