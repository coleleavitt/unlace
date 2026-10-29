// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93E0
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93E0 jmp     cs:off_261D8
//
// Resolved target: insn_create_stkvar
// Target address:  0x26500
// GOT/IAT slot:    0x261D8
// Slot symbol:     off_261D8
// Target type:     <no type info>
// ============================================================

void .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}

