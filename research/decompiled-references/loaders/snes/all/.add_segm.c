// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140 jmp     cs:off_7088
//
// Resolved target: add_segm
// Target address:  0x7180
// GOT/IAT slot:    0x7088
// Slot symbol:     off_7088
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

