// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9140
// Name:            .calc_reference_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9140 jmp     cs:off_2E088
//
// Resolved target: calc_reference_data
// Target address:  0x2E6F8
// GOT/IAT slot:    0x2E088
// Slot symbol:     off_2E088
// Target type:     <no type info>
// ============================================================

void .calc_reference_data(/* see target signature */)
{
    // Tail-call to calc_reference_data via GOT/IAT indirection
    return calc_reference_data(/* forwarded args */);
}

