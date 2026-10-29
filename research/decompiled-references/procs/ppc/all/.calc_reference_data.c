// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20210
// Name:            .calc_reference_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20210 jmp     cs:off_950F0
//
// Resolved target: calc_reference_data
// Target address:  0x95B20
// GOT/IAT slot:    0x950F0
// Slot symbol:     off_950F0
// Target type:     <no type info>
// ============================================================

void .calc_reference_data(/* see target signature */)
{
    // Tail-call to calc_reference_data via GOT/IAT indirection
    return calc_reference_data(/* forwarded args */);
}

