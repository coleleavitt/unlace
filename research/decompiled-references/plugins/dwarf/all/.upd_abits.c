// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA890
// Name:            .upd_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA890 jmp     cs:off_CA430
//
// Resolved target: upd_abits
// Target address:  0xD0D68
// GOT/IAT slot:    0xCA430
// Slot symbol:     off_CA430
// Target type:     <no type info>
// ============================================================

void .upd_abits(/* see target signature */)
{
    // Tail-call to upd_abits via GOT/IAT indirection
    return upd_abits(/* forwarded args */);
}

