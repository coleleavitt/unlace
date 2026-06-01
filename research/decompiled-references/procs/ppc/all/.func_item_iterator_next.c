// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x204C0
// Name:            .func_item_iterator_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x204C0 jmp     cs:off_95248
//
// Resolved target: func_item_iterator_next
// Target address:  0x95C80
// GOT/IAT slot:    0x95248
// Slot symbol:     off_95248
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_next(/* see target signature */)
{
    // Tail-call to func_item_iterator_next via GOT/IAT indirection
    return func_item_iterator_next(/* forwarded args */);
}

