// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x67D0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x67D0 jmp     cs:off_2D3D0
//
// Resolved target: qstrncpy
// Target address:  0x2D8F0
// GOT/IAT slot:    0x2D3D0
// Slot symbol:     off_2D3D0
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

