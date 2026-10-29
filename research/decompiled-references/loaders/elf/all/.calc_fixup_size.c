// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92E0
// Name:            .calc_fixup_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92E0 jmp     cs:off_89158
//
// Resolved target: calc_fixup_size
// Target address:  0x8C458
// GOT/IAT slot:    0x89158
// Slot symbol:     off_89158
// Target type:     <no type info>
// ============================================================

void .calc_fixup_size(/* see target signature */)
{
    // Tail-call to calc_fixup_size via GOT/IAT indirection
    return calc_fixup_size(/* forwarded args */);
}

