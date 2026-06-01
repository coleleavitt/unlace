// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11F0
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11F0 jmp     cs:off_50E0
//
// Resolved target: get_segm_name
// Target address:  0x5268
// GOT/IAT slot:    0x50E0
// Slot symbol:     off_50E0
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

