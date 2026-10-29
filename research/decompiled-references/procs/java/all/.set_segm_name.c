// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6050
// Name:            .set_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6050 jmp     cs:off_2D010
//
// Resolved target: set_segm_name
// Target address:  0x2D510
// GOT/IAT slot:    0x2D010
// Slot symbol:     off_2D010
// Target type:     <no type info>
// ============================================================

void .set_segm_name(/* see target signature */)
{
    // Tail-call to set_segm_name via GOT/IAT indirection
    return set_segm_name(/* forwarded args */);
}

