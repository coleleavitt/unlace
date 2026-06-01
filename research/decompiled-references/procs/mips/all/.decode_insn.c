// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x198D0
// Name:            .decode_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x198D0 jmp     cs:off_75450
//
// Resolved target: decode_insn
// Target address:  0x75CA0
// GOT/IAT slot:    0x75450
// Slot symbol:     off_75450
// Target type:     <no type info>
// ============================================================

void .decode_insn(/* see target signature */)
{
    // Tail-call to decode_insn via GOT/IAT indirection
    return decode_insn(/* forwarded args */);
}

