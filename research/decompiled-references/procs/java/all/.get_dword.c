// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65A0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65A0 jmp     cs:off_2D2B8
//
// Resolved target: get_dword
// Target address:  0x2D7C0
// GOT/IAT slot:    0x2D2B8
// Slot symbol:     off_2D2B8
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

