// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B0
// Name:            .calc_reference_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B0 jmp     cs:off_B040
//
// Resolved target: calc_reference_data
// Target address:  0xB2D8
// GOT/IAT slot:    0xB040
// Slot symbol:     off_B040
// Target type:     <no type info>
// ============================================================

void .calc_reference_data(/* see target signature */)
{
    // Tail-call to calc_reference_data via GOT/IAT indirection
    return calc_reference_data(/* forwarded args */);
}

