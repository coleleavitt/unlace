// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96E0
// Name:            .get_segm_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x96E0 jmp     cs:off_89358
//
// Resolved target: get_segm_qty
// Target address:  0x8C660
// GOT/IAT slot:    0x89358
// Slot symbol:     off_89358
// Target type:     <no type info>
// ============================================================

void .get_segm_qty(/* see target signature */)
{
    // Tail-call to get_segm_qty via GOT/IAT indirection
    return get_segm_qty(/* forwarded args */);
}

