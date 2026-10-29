// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2190
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2190 jmp     cs:off_80B0
//
// Resolved target: qalloc
// Target address:  0x8280
// GOT/IAT slot:    0x80B0
// Slot symbol:     off_80B0
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

