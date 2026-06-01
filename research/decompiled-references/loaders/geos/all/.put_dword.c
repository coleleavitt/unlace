// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_80A8
//
// Resolved target: put_dword
// Target address:  0x8308
// GOT/IAT slot:    0x80A8
// Slot symbol:     off_80A8
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}

