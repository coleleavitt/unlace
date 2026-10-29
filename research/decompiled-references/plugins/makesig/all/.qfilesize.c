// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3410
// Name:            .qfilesize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3410 jmp     cs:off_201F0
//
// Resolved target: qfilesize
// Target address:  0x21B10
// GOT/IAT slot:    0x201F0
// Slot symbol:     off_201F0
// Target type:     <no type info>
// ============================================================

void .qfilesize(/* see target signature */)
{
    // Tail-call to qfilesize via GOT/IAT indirection
    return qfilesize(/* forwarded args */);
}

