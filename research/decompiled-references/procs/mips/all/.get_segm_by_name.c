// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x199C0
// Name:            .get_segm_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x199C0 jmp     cs:off_754C8
//
// Resolved target: get_segm_by_name
// Target address:  0x75D20
// GOT/IAT slot:    0x754C8
// Slot symbol:     off_754C8
// Target type:     <no type info>
// ============================================================

void .get_segm_by_name(/* see target signature */)
{
    // Tail-call to get_segm_by_name via GOT/IAT indirection
    return get_segm_by_name(/* forwarded args */);
}

