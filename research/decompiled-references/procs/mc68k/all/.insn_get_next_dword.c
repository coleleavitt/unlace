// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6580
// Name:            .insn_get_next_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6580 jmp     cs:off_1D2A8
//
// Resolved target: insn_get_next_dword
// Target address:  0x1D7A8
// GOT/IAT slot:    0x1D2A8
// Slot symbol:     off_1D2A8
// Target type:     <no type info>
// ============================================================

void .insn_get_next_dword(/* see target signature */)
{
    // Tail-call to insn_get_next_dword via GOT/IAT indirection
    return insn_get_next_dword(/* forwarded args */);
}

