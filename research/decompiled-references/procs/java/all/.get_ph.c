// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6720
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6720 jmp     cs:off_2D378
//
// Resolved target: get_ph
// Target address:  0x2D890
// GOT/IAT slot:    0x2D378
// Slot symbol:     off_2D378
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

