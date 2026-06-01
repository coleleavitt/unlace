// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9930
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9930 jmp     cs:off_89480
//
// Resolved target: qfileexist
// Target address:  0x8C7A8
// GOT/IAT slot:    0x89480
// Slot symbol:     off_89480
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

