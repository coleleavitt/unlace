// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0B0
// Name:            .insn_add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0B0 jmp     cs:off_35040
//
// Resolved target: insn_add_dref
// Target address:  0x35690
// GOT/IAT slot:    0x35040
// Slot symbol:     off_35040
// Target type:     <no type info>
// ============================================================

void .insn_add_dref(/* see target signature */)
{
    // Tail-call to insn_add_dref via GOT/IAT indirection
    return insn_add_dref(/* forwarded args */);
}

