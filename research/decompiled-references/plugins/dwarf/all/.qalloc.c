// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA610
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA610 jmp     cs:off_CA2F0
//
// Resolved target: qalloc
// Target address:  0xD0C28
// GOT/IAT slot:    0xCA2F0
// Slot symbol:     off_CA2F0
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

