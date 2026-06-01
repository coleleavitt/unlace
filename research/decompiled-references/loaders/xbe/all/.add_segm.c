// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180 jmp     cs:off_50A8
//
// Resolved target: add_segm
// Target address:  0x5208
// GOT/IAT slot:    0x50A8
// Slot symbol:     off_50A8
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

