// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1200
// Name:            .update_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1200 jmp     cs:off_50E8
//
// Resolved target: update_segm
// Target address:  0x5250
// GOT/IAT slot:    0x50E8
// Slot symbol:     off_50E8
// Target type:     <no type info>
// ============================================================

void .update_segm(/* see target signature */)
{
    // Tail-call to update_segm via GOT/IAT indirection
    return update_segm(/* forwarded args */);
}

