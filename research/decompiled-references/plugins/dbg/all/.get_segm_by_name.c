// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34B0
// Name:            .get_segm_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34B0 jmp     cs:off_13240
//
// Resolved target: get_segm_by_name
// Target address:  0x135C8
// GOT/IAT slot:    0x13240
// Slot symbol:     off_13240
// Target type:     <no type info>
// ============================================================

void .get_segm_by_name(/* see target signature */)
{
    // Tail-call to get_segm_by_name via GOT/IAT indirection
    return get_segm_by_name(/* forwarded args */);
}

