// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7120
// Name:            .is_spec_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7120 jmp     cs:off_26078
//
// Resolved target: is_spec_segm
// Target address:  0x26330
// GOT/IAT slot:    0x26078
// Slot symbol:     off_26078
// Target type:     <no type info>
// ============================================================

void .is_spec_segm(/* see target signature */)
{
    // Tail-call to is_spec_segm via GOT/IAT indirection
    return is_spec_segm(/* forwarded args */);
}

