// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10C0
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10C0 jmp     cs:off_4048
//
// Resolved target: add_segm
// Target address:  0x4100
// GOT/IAT slot:    0x4048
// Slot symbol:     off_4048
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

