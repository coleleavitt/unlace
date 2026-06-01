// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A20
// Name:            .func_item_iterator_decode_preceding_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A20 jmp     cs:off_954F8
//
// Resolved target: func_item_iterator_decode_preceding_insn
// Target address:  0x95F30
// GOT/IAT slot:    0x954F8
// Slot symbol:     off_954F8
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_decode_preceding_insn(/* see target signature */)
{
    // Tail-call to func_item_iterator_decode_preceding_insn via GOT/IAT indirection
    return func_item_iterator_decode_preceding_insn(/* forwarded args */);
}

