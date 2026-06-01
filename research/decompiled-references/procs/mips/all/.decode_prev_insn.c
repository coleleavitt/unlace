// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x196C0
// Name:            .decode_prev_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x196C0 jmp     cs:off_75348
//
// Resolved target: decode_prev_insn
// Target address:  0x75B98
// GOT/IAT slot:    0x75348
// Slot symbol:     off_75348
// Target type:     <no type info>
// ============================================================

void .decode_prev_insn(/* see target signature */)
{
    // Tail-call to decode_prev_insn via GOT/IAT indirection
    return decode_prev_insn(/* forwarded args */);
}

