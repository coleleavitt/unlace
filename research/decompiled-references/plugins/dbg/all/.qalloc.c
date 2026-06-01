// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3310
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3310 jmp     cs:off_13170
//
// Resolved target: qalloc
// Target address:  0x134F0
// GOT/IAT slot:    0x13170
// Slot symbol:     off_13170
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

