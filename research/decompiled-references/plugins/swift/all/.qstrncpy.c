// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47F0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47F0 jmp     cs:off_283E0
//
// Resolved target: qstrncpy
// Target address:  0x29D98
// GOT/IAT slot:    0x283E0
// Slot symbol:     off_283E0
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

