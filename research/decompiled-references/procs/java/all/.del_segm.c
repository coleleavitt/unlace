// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6870
// Name:            .del_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6870 jmp     cs:off_2D420
//
// Resolved target: del_segm
// Target address:  0x2D948
// GOT/IAT slot:    0x2D420
// Slot symbol:     off_2D420
// Target type:     <no type info>
// ============================================================

void .del_segm(/* see target signature */)
{
    // Tail-call to del_segm via GOT/IAT indirection
    return del_segm(/* forwarded args */);
}

