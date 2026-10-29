// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7630
// Name:            .insn_get_next_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7630 jmp     cs:off_19300
//
// Resolved target: insn_get_next_dword
// Target address:  0x19840
// GOT/IAT slot:    0x19300
// Slot symbol:     off_19300
// Target type:     <no type info>
// ============================================================

void .insn_get_next_dword(/* see target signature */)
{
    // Tail-call to insn_get_next_dword via GOT/IAT indirection
    return insn_get_next_dword(/* forwarded args */);
}

