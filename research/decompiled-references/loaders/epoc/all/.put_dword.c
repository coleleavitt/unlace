// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31C0
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31C0 jmp     cs:off_130C8
//
// Resolved target: put_dword
// Target address:  0x137B8
// GOT/IAT slot:    0x130C8
// Slot symbol:     off_130C8
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

