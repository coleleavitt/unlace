// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D750
// Name:            .add_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D750 jmp     cs:off_B3390
//
// Resolved target: add_regvar
// Target address:  0xB3B30
// GOT/IAT slot:    0xB3390
// Slot symbol:     off_B3390
// Target type:     <no type info>
// ============================================================

void .add_regvar(/* see target signature */)
{
    // Tail-call to add_regvar via GOT/IAT indirection
    return add_regvar(/* forwarded args */);
}

