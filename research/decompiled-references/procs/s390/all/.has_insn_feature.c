// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10100
// Name:            .has_insn_feature
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10100 jmp     cs:off_2E068
//
// Resolved target: has_insn_feature
// Target address:  0x36CE0
// GOT/IAT slot:    0x2E068
// Slot symbol:     off_2E068
// Target type:     <no type info>
// ============================================================

void .has_insn_feature(/* see target signature */)
{
    // Tail-call to has_insn_feature via GOT/IAT indirection
    return has_insn_feature(/* forwarded args */);
}

