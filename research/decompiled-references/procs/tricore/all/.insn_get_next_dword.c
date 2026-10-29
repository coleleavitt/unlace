// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66D0
// Name:            .insn_get_next_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66D0 jmp     cs:off_24350
//
// Resolved target: insn_get_next_dword
// Target address:  0x26130
// GOT/IAT slot:    0x24350
// Slot symbol:     off_24350
// Target type:     <no type info>
// ============================================================

void .insn_get_next_dword(/* see target signature */)
{
    // Tail-call to insn_get_next_dword via GOT/IAT indirection
    return insn_get_next_dword(/* forwarded args */);
}

