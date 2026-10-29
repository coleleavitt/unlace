// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7570
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7570 jmp     cs:off_192A0
//
// Resolved target: get_dword
// Target address:  0x197D8
// GOT/IAT slot:    0x192A0
// Slot symbol:     off_192A0
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

