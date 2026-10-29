// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2310
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2310 jmp     cs:off_B170
//
// Resolved target: get_dword
// Target address:  0xB420
// GOT/IAT slot:    0xB170
// Slot symbol:     off_B170
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

