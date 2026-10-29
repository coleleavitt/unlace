// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2360
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2360 jmp     cs:off_A198
//
// Resolved target: qfileexist
// Target address:  0xA3E0
// GOT/IAT slot:    0xA198
// Slot symbol:     off_A198
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

