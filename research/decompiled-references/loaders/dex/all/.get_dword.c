// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3600
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3600 jmp     cs:off_282E8
//
// Resolved target: get_dword
// Target address:  0x287A0
// GOT/IAT slot:    0x282E8
// Slot symbol:     off_282E8
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

