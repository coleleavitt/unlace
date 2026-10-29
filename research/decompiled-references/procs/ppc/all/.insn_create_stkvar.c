// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E70
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E70 jmp     cs:off_95720
//
// Resolved target: insn_create_stkvar
// Target address:  0x96170
// GOT/IAT slot:    0x95720
// Slot symbol:     off_95720
// Target type:     <no type info>
// ============================================================

void .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}

