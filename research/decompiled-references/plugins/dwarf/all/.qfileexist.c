// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xABF0
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xABF0 jmp     cs:off_CA5E0
//
// Resolved target: qfileexist
// Target address:  0xD0F38
// GOT/IAT slot:    0xCA5E0
// Slot symbol:     off_CA5E0
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

