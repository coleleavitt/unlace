// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22D0
// Name:            .update_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22D0 jmp     cs:off_7150
//
// Resolved target: update_segm
// Target address:  0x7310
// GOT/IAT slot:    0x7150
// Slot symbol:     off_7150
// Target type:     <no type info>
// ============================================================

void .update_segm(/* see target signature */)
{
    // Tail-call to update_segm via GOT/IAT indirection
    return update_segm(/* forwarded args */);
}

