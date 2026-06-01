// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36A0
// Name:            .add_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x36A0 jmp     cs:off_14338
//
// Resolved target: add_dword
// Target address:  0x14948
// GOT/IAT slot:    0x14338
// Slot symbol:     off_14338
// Target type:     <no type info>
// ============================================================

void .add_dword(/* see target signature */)
{
    // Tail-call to add_dword via GOT/IAT indirection
    return add_dword(/* forwarded args */);
}

