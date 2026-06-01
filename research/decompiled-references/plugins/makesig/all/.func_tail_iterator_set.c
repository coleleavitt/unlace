// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3570
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3570 jmp     cs:off_202A0
//
// Resolved target: func_tail_iterator_set
// Target address:  0x21BD0
// GOT/IAT slot:    0x202A0
// Slot symbol:     off_202A0
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

