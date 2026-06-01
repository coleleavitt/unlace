// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34C0
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34C0 jmp     cs:off_29248
//
// Resolved target: qfileexist
// Target address:  0x29610
// GOT/IAT slot:    0x29248
// Slot symbol:     off_29248
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

