// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6220
// Name:            .set_segm_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6220 jmp     cs:off_2D0F8
//
// Resolved target: set_segm_end
// Target address:  0x2D5F8
// GOT/IAT slot:    0x2D0F8
// Slot symbol:     off_2D0F8
// Target type:     <no type info>
// ============================================================

void .set_segm_end(/* see target signature */)
{
    // Tail-call to set_segm_end via GOT/IAT indirection
    return set_segm_end(/* forwarded args */);
}

