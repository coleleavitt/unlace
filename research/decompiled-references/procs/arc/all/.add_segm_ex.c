// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x85D0
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x85D0 jmp     cs:off_2A2D0
//
// Resolved target: add_segm_ex
// Target address:  0x2BCE0
// GOT/IAT slot:    0x2A2D0
// Slot symbol:     off_2A2D0
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

