// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6870
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6870 jmp     cs:off_2F420
//
// Resolved target: func_tail_iterator_set
// Target address:  0x2FAA0
// GOT/IAT slot:    0x2F420
// Slot symbol:     off_2F420
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

