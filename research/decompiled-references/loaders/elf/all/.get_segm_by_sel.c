// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9810
// Name:            .get_segm_by_sel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9810 jmp     cs:off_893F0
//
// Resolved target: get_segm_by_sel
// Target address:  0x8C710
// GOT/IAT slot:    0x893F0
// Slot symbol:     off_893F0
// Target type:     <no type info>
// ============================================================

void .get_segm_by_sel(/* see target signature */)
{
    // Tail-call to get_segm_by_sel via GOT/IAT indirection
    return get_segm_by_sel(/* forwarded args */);
}

