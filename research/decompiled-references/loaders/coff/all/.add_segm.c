// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4590
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4590 jmp     cs:off_232B0
//
// Resolved target: add_segm
// Target address:  0x236D0
// GOT/IAT slot:    0x232B0
// Slot symbol:     off_232B0
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

