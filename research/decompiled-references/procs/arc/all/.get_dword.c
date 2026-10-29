// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8680
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8680 jmp     cs:off_2A328
//
// Resolved target: get_dword
// Target address:  0x2BD40
// GOT/IAT slot:    0x2A328
// Slot symbol:     off_2A328
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

