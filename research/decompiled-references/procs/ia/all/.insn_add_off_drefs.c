// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7140
// Name:            .insn_add_off_drefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7140 jmp     cs:off_26088
//
// Resolved target: insn_add_off_drefs
// Target address:  0x26340
// GOT/IAT slot:    0x26088
// Slot symbol:     off_26088
// Target type:     <no type info>
// ============================================================

void .insn_add_off_drefs(/* see target signature */)
{
    // Tail-call to insn_add_off_drefs via GOT/IAT indirection
    return insn_add_off_drefs(/* forwarded args */);
}

