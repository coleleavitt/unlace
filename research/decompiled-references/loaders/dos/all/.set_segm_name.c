// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2030
// Name:            .set_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2030 jmp     cs:off_B000
//
// Resolved target: set_segm_name
// Target address:  0xB498
// GOT/IAT slot:    0xB000
// Slot symbol:     off_B000
// Target type:     <no type info>
// ============================================================

void .set_segm_name(/* see target signature */)
{
    // Tail-call to set_segm_name via GOT/IAT indirection
    return set_segm_name(/* forwarded args */);
}

