// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DB60
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DB60 jmp     cs:off_B3598
//
// Resolved target: qstrncpy
// Target address:  0xB3D68
// GOT/IAT slot:    0xB3598
// Slot symbol:     off_B3598
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

