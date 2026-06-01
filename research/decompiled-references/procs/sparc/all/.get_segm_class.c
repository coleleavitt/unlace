// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x74F0
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x74F0 jmp     cs:off_19260
//
// Resolved target: get_segm_class
// Target address:  0x19790
// GOT/IAT slot:    0x19260
// Slot symbol:     off_19260
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

