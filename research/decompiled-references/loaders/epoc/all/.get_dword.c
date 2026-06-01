// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33E0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33E0 jmp     cs:off_131D8
//
// Resolved target: get_dword
// Target address:  0x138D0
// GOT/IAT slot:    0x131D8
// Slot symbol:     off_131D8
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

