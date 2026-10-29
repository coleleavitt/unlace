// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D00
// Name:            .func_tail_iterator_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D00 jmp     cs:off_95668
//
// Resolved target: func_tail_iterator_set
// Target address:  0x960B0
// GOT/IAT slot:    0x95668
// Slot symbol:     off_95668
// Target type:     <no type info>
// ============================================================

void .func_tail_iterator_set(/* see target signature */)
{
    // Tail-call to func_tail_iterator_set via GOT/IAT indirection
    return func_tail_iterator_set(/* forwarded args */);
}

