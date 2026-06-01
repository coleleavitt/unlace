// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_A0D8
//
// Resolved target: qalloc
// Target address:  0xA308
// GOT/IAT slot:    0xA0D8
// Slot symbol:     off_A0D8
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

