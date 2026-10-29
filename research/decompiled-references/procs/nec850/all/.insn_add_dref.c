// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90C0
// Name:            .insn_add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90C0 jmp     cs:off_2E048
//
// Resolved target: insn_add_dref
// Target address:  0x2E6B8
// GOT/IAT slot:    0x2E048
// Slot symbol:     off_2E048
// Target type:     <no type info>
// ============================================================

void .insn_add_dref(/* see target signature */)
{
    // Tail-call to insn_add_dref via GOT/IAT indirection
    return insn_add_dref(/* forwarded args */);
}

