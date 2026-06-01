// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3210
// Name:            .func_item_iterator_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3210 jmp     cs:off_200F0
//
// Resolved target: func_item_iterator_next
// Target address:  0x21A00
// GOT/IAT slot:    0x200F0
// Slot symbol:     off_200F0
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_next(/* see target signature */)
{
    // Tail-call to func_item_iterator_next via GOT/IAT indirection
    return func_item_iterator_next(/* forwarded args */);
}

