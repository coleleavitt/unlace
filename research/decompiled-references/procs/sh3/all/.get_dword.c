// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5520
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5520 jmp     cs:off_15278
//
// Resolved target: get_dword
// Target address:  0x16310
// GOT/IAT slot:    0x15278
// Slot symbol:     off_15278
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

