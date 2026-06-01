// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x51C0
// Name:            .has_insn_feature
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x51C0 jmp     cs:off_150C8
//
// Resolved target: has_insn_feature
// Target address:  0x16158
// GOT/IAT slot:    0x150C8
// Slot symbol:     off_150C8
// Target type:     <no type info>
// ============================================================

void .has_insn_feature(/* see target signature */)
{
    // Tail-call to has_insn_feature via GOT/IAT indirection
    return has_insn_feature(/* forwarded args */);
}

