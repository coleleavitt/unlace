// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x190C0
// Name:            .insn_add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x190C0 jmp     cs:off_75048
//
// Resolved target: insn_add_dref
// Target address:  0x75898
// GOT/IAT slot:    0x75048
// Slot symbol:     off_75048
// Target type:     <no type info>
// ============================================================

void .insn_add_dref(/* see target signature */)
{
    // Tail-call to insn_add_dref via GOT/IAT indirection
    return insn_add_dref(/* forwarded args */);
}

