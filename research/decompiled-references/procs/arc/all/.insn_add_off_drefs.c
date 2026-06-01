// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8290
// Name:            .insn_add_off_drefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8290 jmp     cs:off_2A130
//
// Resolved target: insn_add_off_drefs
// Target address:  0x2BB40
// GOT/IAT slot:    0x2A130
// Slot symbol:     off_2A130
// Target type:     <no type info>
// ============================================================

void .insn_add_off_drefs(/* see target signature */)
{
    // Tail-call to insn_add_off_drefs via GOT/IAT indirection
    return insn_add_off_drefs(/* forwarded args */);
}

