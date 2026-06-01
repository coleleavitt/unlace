// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3720
// Name:            .update_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3720 jmp     cs:off_28378
//
// Resolved target: update_segm
// Target address:  0x28840
// GOT/IAT slot:    0x28378
// Slot symbol:     off_28378
// Target type:     <no type info>
// ============================================================

void .update_segm(/* see target signature */)
{
    // Tail-call to update_segm via GOT/IAT indirection
    return update_segm(/* forwarded args */);
}

