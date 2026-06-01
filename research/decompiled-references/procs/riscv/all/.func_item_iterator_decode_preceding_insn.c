// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6A0
// Name:            .func_item_iterator_decode_preceding_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6A0 jmp     cs:off_35338
//
// Resolved target: func_item_iterator_decode_preceding_insn
// Target address:  0x35988
// GOT/IAT slot:    0x35338
// Slot symbol:     off_35338
// Target type:     <no type info>
// ============================================================

void .func_item_iterator_decode_preceding_insn(/* see target signature */)
{
    // Tail-call to func_item_iterator_decode_preceding_insn via GOT/IAT indirection
    return func_item_iterator_decode_preceding_insn(/* forwarded args */);
}

