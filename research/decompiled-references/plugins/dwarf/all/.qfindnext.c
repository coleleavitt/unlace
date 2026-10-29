// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA8F0
// Name:            .qfindnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA8F0 jmp     cs:off_CA460
//
// Resolved target: qfindnext
// Target address:  0xD0DA0
// GOT/IAT slot:    0xCA460
// Slot symbol:     off_CA460
// Target type:     <no type info>
// ============================================================

void .qfindnext(/* see target signature */)
{
    // Tail-call to qfindnext via GOT/IAT indirection
    return qfindnext(/* forwarded args */);
}

