// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3640
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3640 jmp     cs:off_28308
//
// Resolved target: get_segm_name
// Target address:  0x287C8
// GOT/IAT slot:    0x28308
// Slot symbol:     off_28308
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

