// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D8A0
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D8A0 jmp     cs:off_B3438
//
// Resolved target: qfclose
// Target address:  0xB3BE0
// GOT/IAT slot:    0xB3438
// Slot symbol:     off_B3438
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

