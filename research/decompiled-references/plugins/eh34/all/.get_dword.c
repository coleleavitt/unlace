// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6590
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6590 jmp     cs:off_8D2B0
//
// Resolved target: get_dword
// Target address:  0x8D858
// GOT/IAT slot:    0x8D2B0
// Slot symbol:     off_8D2B0
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

