// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6570
// Name:            .get_segm_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6570 jmp     cs:off_242A0
//
// Resolved target: get_segm_qty
// Target address:  0x26070
// GOT/IAT slot:    0x242A0
// Slot symbol:     off_242A0
// Target type:     <no type info>
// ============================================================

void .get_segm_qty(/* see target signature */)
{
    // Tail-call to get_segm_qty via GOT/IAT indirection
    return get_segm_qty(/* forwarded args */);
}

