// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B50
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B50 jmp     cs:off_95590
//
// Resolved target: get_dword
// Target address:  0x95FD0
// GOT/IAT slot:    0x95590
// Slot symbol:     off_95590
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

