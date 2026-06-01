// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xACD0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xACD0 jmp     cs:off_CA650
//
// Resolved target: qstrncpy
// Target address:  0xD0FB0
// GOT/IAT slot:    0xCA650
// Slot symbol:     off_CA650
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

