// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35F0
// Name:            .get_segm_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35F0 jmp     cs:off_282E0
//
// Resolved target: get_segm_by_name
// Target address:  0x28798
// GOT/IAT slot:    0x282E0
// Slot symbol:     off_282E0
// Target type:     <no type info>
// ============================================================

void .get_segm_by_name(/* see target signature */)
{
    // Tail-call to get_segm_by_name via GOT/IAT indirection
    return get_segm_by_name(/* forwarded args */);
}

