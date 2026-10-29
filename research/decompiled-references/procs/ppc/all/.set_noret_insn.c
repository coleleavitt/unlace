// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20470
// Name:            .set_noret_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20470 jmp     cs:off_95220
//
// Resolved target: set_noret_insn
// Target address:  0x95C58
// GOT/IAT slot:    0x95220
// Slot symbol:     off_95220
// Target type:     <no type info>
// ============================================================

void .set_noret_insn(/* see target signature */)
{
    // Tail-call to set_noret_insn via GOT/IAT indirection
    return set_noret_insn(/* forwarded args */);
}

