// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20420
// Name:            .insn_add_off_drefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20420 jmp     cs:off_951F8
//
// Resolved target: insn_add_off_drefs
// Target address:  0x95C30
// GOT/IAT slot:    0x951F8
// Slot symbol:     off_951F8
// Target type:     <no type info>
// ============================================================

void .insn_add_off_drefs(/* see target signature */)
{
    // Tail-call to insn_add_off_drefs via GOT/IAT indirection
    return insn_add_off_drefs(/* forwarded args */);
}

