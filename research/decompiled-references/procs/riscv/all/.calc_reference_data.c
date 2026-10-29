// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA160
// Name:            .calc_reference_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA160 jmp     cs:off_35098
//
// Resolved target: calc_reference_data
// Target address:  0x356E8
// GOT/IAT slot:    0x35098
// Slot symbol:     off_35098
// Target type:     <no type info>
// ============================================================

void .calc_reference_data(/* see target signature */)
{
    // Tail-call to calc_reference_data via GOT/IAT indirection
    return calc_reference_data(/* forwarded args */);
}

