// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D6C0
// Name:            .qunlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D6C0 jmp     cs:off_B3348
//
// Resolved target: qunlink
// Target address:  0xB3AE8
// GOT/IAT slot:    0xB3348
// Slot symbol:     off_B3348
// Target type:     <no type info>
// ============================================================

void .qunlink(/* see target signature */)
{
    // Tail-call to qunlink via GOT/IAT indirection
    return qunlink(/* forwarded args */);
}

