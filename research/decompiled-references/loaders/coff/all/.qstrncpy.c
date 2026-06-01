// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4720
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4720 jmp     cs:off_23378
//
// Resolved target: qstrncpy
// Target address:  0x237B8
// GOT/IAT slot:    0x23378
// Slot symbol:     off_23378
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

