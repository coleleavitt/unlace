// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x76D0
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x76D0 jmp     cs:off_19350
//
// Resolved target: prev_not_tail
// Target address:  0x19898
// GOT/IAT slot:    0x19350
// Slot symbol:     off_19350
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

