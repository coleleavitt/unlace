// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34F0
// Name:            .add_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34F0 jmp     cs:off_13260
//
// Resolved target: add_dword
// Target address:  0x13970
// GOT/IAT slot:    0x13260
// Slot symbol:     off_13260
// Target type:     <no type info>
// ============================================================

void .add_dword(/* see target signature */)
{
    // Tail-call to add_dword via GOT/IAT indirection
    return add_dword(/* forwarded args */);
}

