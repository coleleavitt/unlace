// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA50
// Name:            .set_segm_addressing
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA50 jmp     cs:off_35510
//
// Resolved target: set_segm_addressing
// Target address:  0x35B80
// GOT/IAT slot:    0x35510
// Slot symbol:     off_35510
// Target type:     <no type info>
// ============================================================

void .set_segm_addressing(/* see target signature */)
{
    // Tail-call to set_segm_addressing via GOT/IAT indirection
    return set_segm_addressing(/* forwarded args */);
}

