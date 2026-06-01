// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2F0
// Name:            .is_spec_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2F0 jmp     cs:off_CA160
//
// Resolved target: is_spec_segm
// Target address:  0xD0A90
// GOT/IAT slot:    0xCA160
// Slot symbol:     off_CA160
// Target type:     <no type info>
// ============================================================

void .is_spec_segm(/* see target signature */)
{
    // Tail-call to is_spec_segm via GOT/IAT indirection
    return is_spec_segm(/* forwarded args */);
}

