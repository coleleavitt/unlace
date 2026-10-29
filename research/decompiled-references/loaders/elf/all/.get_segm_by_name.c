// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97A0
// Name:            .get_segm_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x97A0 jmp     cs:off_893B8
//
// Resolved target: get_segm_by_name
// Target address:  0x8C6D0
// GOT/IAT slot:    0x893B8
// Slot symbol:     off_893B8
// Target type:     <no type info>
// ============================================================

void .get_segm_by_name(/* see target signature */)
{
    // Tail-call to get_segm_by_name via GOT/IAT indirection
    return get_segm_by_name(/* forwarded args */);
}

