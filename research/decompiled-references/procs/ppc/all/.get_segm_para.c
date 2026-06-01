// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D80
// Name:            .get_segm_para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D80 jmp     cs:off_956A8
//
// Resolved target: get_segm_para
// Target address:  0x960F8
// GOT/IAT slot:    0x956A8
// Slot symbol:     off_956A8
// Target type:     <no type info>
// ============================================================

void .get_segm_para(/* see target signature */)
{
    // Tail-call to get_segm_para via GOT/IAT indirection
    return get_segm_para(/* forwarded args */);
}

