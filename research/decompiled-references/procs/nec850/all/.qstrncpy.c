// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9960
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9960 jmp     cs:off_2E498
//
// Resolved target: qstrncpy
// Target address:  0x2EB20
// GOT/IAT slot:    0x2E498
// Slot symbol:     off_2E498
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

