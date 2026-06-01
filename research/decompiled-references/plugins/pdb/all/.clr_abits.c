// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D5C0
// Name:            .clr_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D5C0 jmp     cs:off_B32C8
//
// Resolved target: clr_abits
// Target address:  0xB3A68
// GOT/IAT slot:    0xB32C8
// Slot symbol:     off_B32C8
// Target type:     <no type info>
// ============================================================

void .clr_abits(/* see target signature */)
{
    // Tail-call to clr_abits via GOT/IAT indirection
    return clr_abits(/* forwarded args */);
}

