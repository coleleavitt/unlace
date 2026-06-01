// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2580
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2580 jmp     cs:off_B2A8
//
// Resolved target: get_ph
// Target address:  0xB758
// GOT/IAT slot:    0xB2A8
// Slot symbol:     off_B2A8
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

