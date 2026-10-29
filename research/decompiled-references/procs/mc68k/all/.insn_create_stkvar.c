// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6680
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6680 jmp     cs:off_1D328
//
// Resolved target: insn_create_stkvar
// Target address:  0x1D830
// GOT/IAT slot:    0x1D328
// Slot symbol:     off_1D328
// Target type:     <no type info>
// ============================================================

void .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}

