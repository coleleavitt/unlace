// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3050
// Name:            .get_segm_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3050 jmp     cs:off_14010
//
// Resolved target: get_segm_base
// Target address:  0x145F8
// GOT/IAT slot:    0x14010
// Slot symbol:     off_14010
// Target type:     <no type info>
// ============================================================

void .get_segm_base(/* see target signature */)
{
    // Tail-call to get_segm_base via GOT/IAT indirection
    return get_segm_base(/* forwarded args */);
}

