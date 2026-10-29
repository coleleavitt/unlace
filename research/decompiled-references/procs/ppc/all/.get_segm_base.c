// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20060
// Name:            .get_segm_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20060 jmp     cs:off_95018
//
// Resolved target: get_segm_base
// Target address:  0x95A48
// GOT/IAT slot:    0x95018
// Slot symbol:     off_95018
// Target type:     <no type info>
// ============================================================

void .get_segm_base(/* see target signature */)
{
    // Tail-call to get_segm_base via GOT/IAT indirection
    return get_segm_base(/* forwarded args */);
}

