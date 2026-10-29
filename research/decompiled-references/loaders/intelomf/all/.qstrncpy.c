// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1260
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1260 jmp     cs:off_5118
//
// Resolved target: qstrncpy
// Target address:  0x5370
// GOT/IAT slot:    0x5118
// Slot symbol:     off_5118
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

