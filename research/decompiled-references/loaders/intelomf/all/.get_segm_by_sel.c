// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1220
// Name:            .get_segm_by_sel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1220 jmp     cs:off_50F8
//
// Resolved target: get_segm_by_sel
// Target address:  0x5350
// GOT/IAT slot:    0x50F8
// Slot symbol:     off_50F8
// Target type:     <no type info>
// ============================================================

void .get_segm_by_sel(/* see target signature */)
{
    // Tail-call to get_segm_by_sel via GOT/IAT indirection
    return get_segm_by_sel(/* forwarded args */);
}

