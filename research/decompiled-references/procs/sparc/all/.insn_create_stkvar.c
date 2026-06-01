// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7740
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7740 jmp     cs:off_19388
//
// Resolved target: insn_create_stkvar
// Target address:  0x198D0
// GOT/IAT slot:    0x19388
// Slot symbol:     off_19388
// Target type:     <no type info>
// ============================================================

void .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}

