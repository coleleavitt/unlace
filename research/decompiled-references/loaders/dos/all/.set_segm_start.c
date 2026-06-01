// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2040
// Name:            .set_segm_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2040 jmp     cs:off_B008
//
// Resolved target: set_segm_start
// Target address:  0xB4A0
// GOT/IAT slot:    0xB008
// Slot symbol:     off_B008
// Target type:     <no type info>
// ============================================================

void .set_segm_start(/* see target signature */)
{
    // Tail-call to set_segm_start via GOT/IAT indirection
    return set_segm_start(/* forwarded args */);
}

