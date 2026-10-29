// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1210
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1210 jmp     cs:off_50F0
//
// Resolved target: qstrncpy
// Target address:  0x5260
// GOT/IAT slot:    0x50F0
// Slot symbol:     off_50F0
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

