// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2240
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2240 jmp     cs:off_8108
//
// Resolved target: add_segm
// Target address:  0x82E8
// GOT/IAT slot:    0x8108
// Slot symbol:     off_8108
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

