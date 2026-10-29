// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33A0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33A0 jmp     cs:off_1A1B8
//
// Resolved target: qstrncpy
// Target address:  0x1A488
// GOT/IAT slot:    0x1A1B8
// Slot symbol:     off_1A1B8
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

