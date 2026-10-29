// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA830
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA830 jmp     cs:off_35400
//
// Resolved target: get_segm_name
// Target address:  0x35A60
// GOT/IAT slot:    0x35400
// Slot symbol:     off_35400
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

