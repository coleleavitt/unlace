// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9630
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9630 jmp     cs:off_2E300
//
// Resolved target: get_segm_class
// Target address:  0x2E970
// GOT/IAT slot:    0x2E300
// Slot symbol:     off_2E300
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

