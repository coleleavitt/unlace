// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5630
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5630 jmp     cs:off_15300
//
// Resolved target: get_ph
// Target address:  0x163A8
// GOT/IAT slot:    0x15300
// Slot symbol:     off_15300
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

