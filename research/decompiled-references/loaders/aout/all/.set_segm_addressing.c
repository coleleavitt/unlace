// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x12A0
// Name:            .set_segm_addressing
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x12A0 jmp     cs:off_6138
//
// Resolved target: set_segm_addressing
// Target address:  0x62D0
// GOT/IAT slot:    0x6138
// Slot symbol:     off_6138
// Target type:     <no type info>
// ============================================================

void .set_segm_addressing(/* see target signature */)
{
    // Tail-call to set_segm_addressing via GOT/IAT indirection
    return set_segm_addressing(/* forwarded args */);
}

