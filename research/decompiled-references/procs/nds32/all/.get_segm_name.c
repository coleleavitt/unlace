// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8640
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8640 jmp     cs:off_2A308
//
// Resolved target: get_segm_name
// Target address:  0x2A888
// GOT/IAT slot:    0x2A308
// Slot symbol:     off_2A308
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

