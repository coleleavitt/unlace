// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3100
// Name:            .has_insn_feature
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3100 jmp     cs:off_1A068
//
// Resolved target: has_insn_feature
// Target address:  0x1A320
// GOT/IAT slot:    0x1A068
// Slot symbol:     off_1A068
// Target type:     <no type info>
// ============================================================

void .has_insn_feature(/* see target signature */)
{
    // Tail-call to has_insn_feature via GOT/IAT indirection
    return has_insn_feature(/* forwarded args */);
}

