// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4240
// Name:            .is_spec_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4240 jmp     cs:off_28108
//
// Resolved target: is_spec_segm
// Target address:  0x29AA0
// GOT/IAT slot:    0x28108
// Slot symbol:     off_28108
// Target type:     <no type info>
// ============================================================

void .is_spec_segm(/* see target signature */)
{
    // Tail-call to is_spec_segm via GOT/IAT indirection
    return is_spec_segm(/* forwarded args */);
}

