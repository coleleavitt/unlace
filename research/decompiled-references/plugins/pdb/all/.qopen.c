// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D770
// Name:            .qopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D770 jmp     cs:off_B33A0
//
// Resolved target: qopen
// Target address:  0xB3B40
// GOT/IAT slot:    0xB33A0
// Slot symbol:     off_B33A0
// Target type:     <no type info>
// ============================================================

void .qopen(/* see target signature */)
{
    // Tail-call to qopen via GOT/IAT indirection
    return qopen(/* forwarded args */);
}

