// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2100
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2100 jmp     cs:off_8068
//
// Resolved target: put_dword
// Target address:  0x8748
// GOT/IAT slot:    0x8068
// Slot symbol:     off_8068
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

