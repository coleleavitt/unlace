// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6290
// Name:            .func_item_iterator_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6290 jmp     cs:off_8D130
//
// Resolved target: func_item_iterator_next
// Target address:  0x8D6C0
// GOT/IAT slot:    0x8D130
// Slot symbol:     off_8D130
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_next(/* see target signature */)
{
    // Tail-call to func_item_iterator_next via GOT/IAT indirection
    return func_item_iterator_next(/* forwarded args */);
}

