// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4500
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4500 jmp     cs:off_23268
//
// Resolved target: add_segm_ex
// Target address:  0x23688
// GOT/IAT slot:    0x23268
// Slot symbol:     off_23268
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

