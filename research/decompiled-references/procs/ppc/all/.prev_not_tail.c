// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20DA0
// Name:            .prev_not_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20DA0 jmp     cs:off_956B8
//
// Resolved target: prev_not_tail
// Target address:  0x96108
// GOT/IAT slot:    0x956B8
// Slot symbol:     off_956B8
// Target type:     <no type info>
// ============================================================

void .prev_not_tail(/* see target signature */)
{
    // Tail-call to prev_not_tail via GOT/IAT indirection
    return prev_not_tail(/* forwarded args */);
}

