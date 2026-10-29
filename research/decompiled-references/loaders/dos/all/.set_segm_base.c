// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2640
// Name:            .set_segm_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2640 jmp     cs:off_B308
//
// Resolved target: set_segm_base
// Target address:  0xB7C0
// GOT/IAT slot:    0xB308
// Slot symbol:     off_B308
// Target type:     <no type info>
// ============================================================

void .set_segm_base(/* see target signature */)
{
    // Tail-call to set_segm_base via GOT/IAT indirection
    return set_segm_base(/* forwarded args */);
}

