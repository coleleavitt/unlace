// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6500
// Name:            .get_segm_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6500 jmp     cs:off_8D268
//
// Resolved target: get_segm_qty
// Target address:  0x8D800
// GOT/IAT slot:    0x8D268
// Slot symbol:     off_8D268
// Target type:     <no type info>
// ============================================================

void .get_segm_qty(/* see target signature */)
{
    // Tail-call to get_segm_qty via GOT/IAT indirection
    return get_segm_qty(/* forwarded args */);
}

