// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5210
// Name:            .recalc_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5210 jmp     cs:off_150F0
//
// Resolved target: recalc_spd
// Target address:  0x16180
// GOT/IAT slot:    0x150F0
// Slot symbol:     off_150F0
// Target type:     <no type info>
// ============================================================

void .recalc_spd(/* see target signature */)
{
    // Tail-call to recalc_spd via GOT/IAT indirection
    return recalc_spd(/* forwarded args */);
}

