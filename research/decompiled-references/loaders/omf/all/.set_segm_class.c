// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3210
// Name:            .set_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3210 jmp     cs:off_140F0
//
// Resolved target: set_segm_class
// Target address:  0x146D8
// GOT/IAT slot:    0x140F0
// Slot symbol:     off_140F0
// Target type:     <no type info>
// ============================================================

void .set_segm_class(/* see target signature */)
{
    // Tail-call to set_segm_class via GOT/IAT indirection
    return set_segm_class(/* forwarded args */);
}

