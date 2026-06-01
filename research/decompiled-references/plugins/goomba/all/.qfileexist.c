// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4960
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4960 jmp     cs:off_4E498
//
// Resolved target: qfileexist
// Target address:  0x4FAD0
// GOT/IAT slot:    0x4E498
// Slot symbol:     off_4E498
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

