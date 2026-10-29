// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6600
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6600 jmp     cs:off_1D2E8
//
// Resolved target: get_ph
// Target address:  0x1D7F0
// GOT/IAT slot:    0x1D2E8
// Slot symbol:     off_1D2E8
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

