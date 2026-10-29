// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B00
// Name:            .insn_get_next_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B00 jmp     cs:off_75568
//
// Resolved target: insn_get_next_dword
// Target address:  0x75DC8
// GOT/IAT slot:    0x75568
// Slot symbol:     off_75568
// Target type:     <no type info>
// ============================================================

void .insn_get_next_dword(/* see target signature */)
{
    // Tail-call to insn_get_next_dword via GOT/IAT indirection
    return insn_get_next_dword(/* forwarded args */);
}

