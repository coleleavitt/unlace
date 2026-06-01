// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2240
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2240 jmp     cs:off_13108
//
// Resolved target: get_dword
// Target address:  0x133A0
// GOT/IAT slot:    0x13108
// Slot symbol:     off_13108
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

