// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA9D0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA9D0 jmp     cs:off_354D0
//
// Resolved target: qstrncpy
// Target address:  0x35B38
// GOT/IAT slot:    0x354D0
// Slot symbol:     off_354D0
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

