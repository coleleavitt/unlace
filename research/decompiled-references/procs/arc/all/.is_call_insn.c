// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8800
// Name:            .is_call_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8800 jmp     cs:off_2A3E8
//
// Resolved target: is_call_insn
// Target address:  0x2BE10
// GOT/IAT slot:    0x2A3E8
// Slot symbol:     off_2A3E8
// Target type:     <no type info>
// ============================================================

void .is_call_insn(/* see target signature */)
{
    // Tail-call to is_call_insn via GOT/IAT indirection
    return is_call_insn(/* forwarded args */);
}

