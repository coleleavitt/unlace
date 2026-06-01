// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11C0
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11C0 jmp     cs:off_60C8
//
// Resolved target: add_segm
// Target address:  0x6250
// GOT/IAT slot:    0x60C8
// Slot symbol:     off_60C8
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

