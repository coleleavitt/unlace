// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x67C0
// Name:            .update_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x67C0 jmp     cs:off_2D3C8
//
// Resolved target: update_segm
// Target address:  0x2D8E8
// GOT/IAT slot:    0x2D3C8
// Slot symbol:     off_2D3C8
// Target type:     <no type info>
// ============================================================

void .update_segm(/* see target signature */)
{
    // Tail-call to update_segm via GOT/IAT indirection
    return update_segm(/* forwarded args */);
}

