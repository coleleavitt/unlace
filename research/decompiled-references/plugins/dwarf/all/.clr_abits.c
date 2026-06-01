// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6A0
// Name:            .clr_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6A0 jmp     cs:off_CA338
//
// Resolved target: clr_abits
// Target address:  0xD0C70
// GOT/IAT slot:    0xCA338
// Slot symbol:     off_CA338
// Target type:     <no type info>
// ============================================================

void .clr_abits(/* see target signature */)
{
    // Tail-call to clr_abits via GOT/IAT indirection
    return clr_abits(/* forwarded args */);
}

