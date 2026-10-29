// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8790
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8790 jmp     cs:off_2A3B0
//
// Resolved target: insn_create_stkvar
// Target address:  0x2A938
// GOT/IAT slot:    0x2A3B0
// Slot symbol:     off_2A3B0
// Target type:     <no type info>
// ============================================================

void .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}

