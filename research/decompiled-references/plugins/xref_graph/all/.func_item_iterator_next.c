// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17540
// Name:            .func_item_iterator_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17540 jmp     cs:off_4FA88
//
// Resolved target: func_item_iterator_next
// Target address:  0x510D8
// GOT/IAT slot:    0x4FA88
// Slot symbol:     off_4FA88
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_next(/* see target signature */)
{
    // Tail-call to func_item_iterator_next via GOT/IAT indirection
    return func_item_iterator_next(/* forwarded args */);
}

