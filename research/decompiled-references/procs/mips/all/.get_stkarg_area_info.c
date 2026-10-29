// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19330
// Name:            .get_stkarg_area_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19330 jmp     cs:off_75180
//
// Resolved target: get_stkarg_area_info
// Target address:  0x759D0
// GOT/IAT slot:    0x75180
// Slot symbol:     off_75180
// Target type:     <no type info>
// ============================================================

void .get_stkarg_area_info(/* see target signature */)
{
    // Tail-call to get_stkarg_area_info via GOT/IAT indirection
    return get_stkarg_area_info(/* forwarded args */);
}

