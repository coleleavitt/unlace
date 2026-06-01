// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4520
// Name:            .get_segm_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4520 jmp     cs:off_23278
//
// Resolved target: get_segm_qty
// Target address:  0x23698
// GOT/IAT slot:    0x23278
// Slot symbol:     off_23278
// Target type:     <no type info>
// ============================================================

void .get_segm_qty(/* see target signature */)
{
    // Tail-call to get_segm_qty via GOT/IAT indirection
    return get_segm_qty(/* forwarded args */);
}

