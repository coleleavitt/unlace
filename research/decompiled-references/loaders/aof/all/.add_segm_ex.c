// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2210
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2210 jmp     cs:off_70F0
//
// Resolved target: add_segm_ex
// Target address:  0x72A8
// GOT/IAT slot:    0x70F0
// Slot symbol:     off_70F0
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

