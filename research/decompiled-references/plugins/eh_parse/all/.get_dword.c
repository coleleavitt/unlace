// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6770
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6770 jmp     cs:off_2F3A0
//
// Resolved target: get_dword
// Target address:  0x2FA18
// GOT/IAT slot:    0x2F3A0
// Slot symbol:     off_2F3A0
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

