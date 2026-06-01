// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5490
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5490 jmp     cs:off_15230
//
// Resolved target: add_segm_ex
// Target address:  0x162C0
// GOT/IAT slot:    0x15230
// Slot symbol:     off_15230
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

