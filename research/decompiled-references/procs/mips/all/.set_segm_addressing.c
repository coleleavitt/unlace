// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19DA0
// Name:            .set_segm_addressing
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19DA0 jmp     cs:off_756B8
//
// Resolved target: set_segm_addressing
// Target address:  0x75F28
// GOT/IAT slot:    0x756B8
// Slot symbol:     off_756B8
// Target type:     <no type info>
// ============================================================

void .set_segm_addressing(/* see target signature */)
{
    // Tail-call to set_segm_addressing via GOT/IAT indirection
    return set_segm_addressing(/* forwarded args */);
}

