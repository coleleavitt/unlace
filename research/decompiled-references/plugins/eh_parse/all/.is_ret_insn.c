// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x68A0
// Name:            .is_ret_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x68A0 jmp     cs:off_2F438
//
// Resolved target: is_ret_insn
// Target address:  0x2FAC0
// GOT/IAT slot:    0x2F438
// Slot symbol:     off_2F438
// Target type:     <no type info>
// ============================================================

void .is_ret_insn(/* see target signature */)
{
    // Tail-call to is_ret_insn via GOT/IAT indirection
    return is_ret_insn(/* forwarded args */);
}

