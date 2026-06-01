// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6260
// Name:            .insn_add_off_drefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6260 jmp     cs:off_24118
//
// Resolved target: insn_add_off_drefs
// Target address:  0x25EE8
// GOT/IAT slot:    0x24118
// Slot symbol:     off_24118
// Target type:     <no type info>
// ============================================================

void .insn_add_off_drefs(/* see target signature */)
{
    // Tail-call to insn_add_off_drefs via GOT/IAT indirection
    return insn_add_off_drefs(/* forwarded args */);
}

