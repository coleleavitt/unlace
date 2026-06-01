// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32E0
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32E0 jmp     cs:off_20158
//
// Resolved target: qalloc
// Target address:  0x21A68
// GOT/IAT slot:    0x20158
// Slot symbol:     off_20158
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

