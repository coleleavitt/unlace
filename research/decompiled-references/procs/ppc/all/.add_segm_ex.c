// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A50
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A50 jmp     cs:off_95510
//
// Resolved target: add_segm_ex
// Target address:  0x95F48
// GOT/IAT slot:    0x95510
// Slot symbol:     off_95510
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

