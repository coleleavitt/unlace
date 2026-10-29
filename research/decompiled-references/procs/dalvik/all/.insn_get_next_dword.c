// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5480
// Name:            .insn_get_next_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5480 jmp     cs:off_1A228
//
// Resolved target: insn_get_next_dword
// Target address:  0x1A5C0
// GOT/IAT slot:    0x1A228
// Slot symbol:     off_1A228
// Target type:     <no type info>
// ============================================================

void .insn_get_next_dword(/* see target signature */)
{
    // Tail-call to insn_get_next_dword via GOT/IAT indirection
    return insn_get_next_dword(/* forwarded args */);
}

