// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2C0
// Name:            .insn_add_off_drefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2C0 jmp     cs:off_35148
//
// Resolved target: insn_add_off_drefs
// Target address:  0x35798
// GOT/IAT slot:    0x35148
// Slot symbol:     off_35148
// Target type:     <no type info>
// ============================================================

void .insn_add_off_drefs(/* see target signature */)
{
    // Tail-call to insn_add_off_drefs via GOT/IAT indirection
    return insn_add_off_drefs(/* forwarded args */);
}

