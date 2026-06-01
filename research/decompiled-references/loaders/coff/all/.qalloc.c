// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43A0
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43A0 jmp     cs:off_231B8
//
// Resolved target: qalloc
// Target address:  0x235D8
// GOT/IAT slot:    0x231B8
// Slot symbol:     off_231B8
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

