// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x82B0
// Name:            .recalc_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x82B0 jmp     cs:off_2A140
//
// Resolved target: recalc_spd
// Target address:  0x2BB50
// GOT/IAT slot:    0x2A140
// Slot symbol:     off_2A140
// Target type:     <no type info>
// ============================================================

void .recalc_spd(/* see target signature */)
{
    // Tail-call to recalc_spd via GOT/IAT indirection
    return recalc_spd(/* forwarded args */);
}

