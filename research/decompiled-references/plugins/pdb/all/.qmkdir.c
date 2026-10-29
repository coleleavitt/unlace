// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DAC0
// Name:            .qmkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DAC0 jmp     cs:off_B3548
//
// Resolved target: qmkdir
// Target address:  0xB3D18
// GOT/IAT slot:    0xB3548
// Slot symbol:     off_B3548
// Target type:     <no type info>
// ============================================================

void .qmkdir(/* see target signature */)
{
    // Tail-call to qmkdir via GOT/IAT indirection
    return qmkdir(/* forwarded args */);
}

