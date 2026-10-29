// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11D0
// Name:            .get_segm_by_sel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11D0 jmp     cs:off_50D0
//
// Resolved target: get_segm_by_sel
// Target address:  0x5210
// GOT/IAT slot:    0x50D0
// Slot symbol:     off_50D0
// Target type:     <no type info>
// ============================================================

void .get_segm_by_sel(/* see target signature */)
{
    // Tail-call to get_segm_by_sel via GOT/IAT indirection
    return get_segm_by_sel(/* forwarded args */);
}

