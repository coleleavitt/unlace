// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D7B0
// Name:            .upd_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D7B0 jmp     cs:off_B33C0
//
// Resolved target: upd_abits
// Target address:  0xB3B60
// GOT/IAT slot:    0xB33C0
// Slot symbol:     off_B33C0
// Target type:     <no type info>
// ============================================================

void .upd_abits(/* see target signature */)
{
    // Tail-call to upd_abits via GOT/IAT indirection
    return upd_abits(/* forwarded args */);
}

