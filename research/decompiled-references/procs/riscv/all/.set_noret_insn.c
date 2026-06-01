// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2F0
// Name:            .set_noret_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2F0 jmp     cs:off_35160
//
// Resolved target: set_noret_insn
// Target address:  0x357B0
// GOT/IAT slot:    0x35160
// Slot symbol:     off_35160
// Target type:     <no type info>
// ============================================================

void .set_noret_insn(/* see target signature */)
{
    // Tail-call to set_noret_insn via GOT/IAT indirection
    return set_noret_insn(/* forwarded args */);
}

