// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17020
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17020 jmp     cs:off_4F7F8
//
// Resolved target: func_tail_iterator_set
// Target address:  0x50C28
// GOT/IAT slot:    0x4F7F8
// Slot symbol:     off_4F7F8
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

