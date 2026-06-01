// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8250
// Name:            .has_insn_feature
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8250 jmp     cs:off_2A110
//
// Resolved target: has_insn_feature
// Target address:  0x2BB20
// GOT/IAT slot:    0x2A110
// Slot symbol:     off_2A110
// Target type:     <no type info>
// ============================================================

void .has_insn_feature(/* see target signature */)
{
    // Tail-call to has_insn_feature via GOT/IAT indirection
    return has_insn_feature(/* forwarded args */);
}

