// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7610
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7610 jmp     cs:off_192F0
//
// Resolved target: get_segm_name
// Target address:  0x19830
// GOT/IAT slot:    0x192F0
// Slot symbol:     off_192F0
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

