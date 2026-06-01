// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA260
// Name:            .get_stkarg_area_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA260 jmp     cs:off_35118
//
// Resolved target: get_stkarg_area_info
// Target address:  0x35768
// GOT/IAT slot:    0x35118
// Slot symbol:     off_35118
// Target type:     <no type info>
// ============================================================

void .get_stkarg_area_info(/* see target signature */)
{
    // Tail-call to get_stkarg_area_info via GOT/IAT indirection
    return get_stkarg_area_info(/* forwarded args */);
}

