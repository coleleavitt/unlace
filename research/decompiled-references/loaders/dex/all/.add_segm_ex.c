// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3510
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3510 jmp     cs:off_28270
//
// Resolved target: add_segm_ex
// Target address:  0x28720
// GOT/IAT slot:    0x28270
// Slot symbol:     off_28270
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

