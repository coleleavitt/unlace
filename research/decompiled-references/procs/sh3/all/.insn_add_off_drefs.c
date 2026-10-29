// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x51F0
// Name:            .insn_add_off_drefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x51F0 jmp     cs:off_150E0
//
// Resolved target: insn_add_off_drefs
// Target address:  0x16170
// GOT/IAT slot:    0x150E0
// Slot symbol:     off_150E0
// Target type:     <no type info>
// ============================================================

void .insn_add_off_drefs(/* see target signature */)
{
    // Tail-call to insn_add_off_drefs via GOT/IAT indirection
    return insn_add_off_drefs(/* forwarded args */);
}

