// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x86F0
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x86F0 jmp     cs:off_2A360
//
// Resolved target: prev_not_tail
// Target address:  0x2A8E8
// GOT/IAT slot:    0x2A360
// Slot symbol:     off_2A360
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

