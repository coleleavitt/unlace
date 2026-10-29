// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA760
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA760 jmp     cs:off_35398
//
// Resolved target: get_dword
// Target address:  0x359F0
// GOT/IAT slot:    0x35398
// Slot symbol:     off_35398
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

