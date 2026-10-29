// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5480
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5480 jmp     cs:off_15228
//
// Resolved target: get_segm_class
// Target address:  0x162B8
// GOT/IAT slot:    0x15228
// Slot symbol:     off_15228
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

