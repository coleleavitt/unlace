// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7320
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7320 jmp     cs:off_26178
//
// Resolved target: get_segm_name
// Target address:  0x26440
// GOT/IAT slot:    0x26178
// Slot symbol:     off_26178
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

