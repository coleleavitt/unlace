// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66B0
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66B0 jmp     cs:off_24340
//
// Resolved target: get_segm_name
// Target address:  0x26120
// GOT/IAT slot:    0x24340
// Slot symbol:     off_24340
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

