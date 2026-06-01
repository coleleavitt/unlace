// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x87C0
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x87C0 jmp     cs:off_2A3C8
//
// Resolved target: func_tail_iterator_set
// Target address:  0x2BDE8
// GOT/IAT slot:    0x2A3C8
// Slot symbol:     off_2A3C8
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

