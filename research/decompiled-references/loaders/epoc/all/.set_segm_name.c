// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3030
// Name:            .set_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3030 jmp     cs:off_13000
//
// Resolved target: set_segm_name
// Target address:  0x136E8
// GOT/IAT slot:    0x13000
// Slot symbol:     off_13000
// Target type:     <no type info>
// ============================================================

void .set_segm_name(/* see target signature */)
{
    // Tail-call to set_segm_name via GOT/IAT indirection
    return set_segm_name(/* forwarded args */);
}

