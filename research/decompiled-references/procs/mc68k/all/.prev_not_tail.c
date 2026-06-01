// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6620
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6620 jmp     cs:off_1D2F8
//
// Resolved target: prev_not_tail
// Target address:  0x1D800
// GOT/IAT slot:    0x1D2F8
// Slot symbol:     off_1D2F8
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

