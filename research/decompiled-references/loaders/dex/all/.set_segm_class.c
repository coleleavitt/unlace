// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3240
// Name:            .set_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3240 jmp     cs:off_28108
//
// Resolved target: set_segm_class
// Target address:  0x285B8
// GOT/IAT slot:    0x28108
// Slot symbol:     off_28108
// Target type:     <no type info>
// ============================================================

void .set_segm_class(/* see target signature */)
{
    // Tail-call to set_segm_class via GOT/IAT indirection
    return set_segm_class(/* forwarded args */);
}

