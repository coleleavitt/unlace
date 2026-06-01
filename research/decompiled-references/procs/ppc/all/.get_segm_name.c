// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C60
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C60 jmp     cs:off_95618
//
// Resolved target: get_segm_name
// Target address:  0x96060
// GOT/IAT slot:    0x95618
// Slot symbol:     off_95618
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

