// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8750
// Name:            .insn_get_next_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8750 jmp     cs:off_2A390
//
// Resolved target: insn_get_next_dword
// Target address:  0x2BDB0
// GOT/IAT slot:    0x2A390
// Slot symbol:     off_2A390
// Target type:     <no type info>
// ============================================================

void .insn_get_next_dword(/* see target signature */)
{
    // Tail-call to insn_get_next_dword via GOT/IAT indirection
    return insn_get_next_dword(/* forwarded args */);
}

