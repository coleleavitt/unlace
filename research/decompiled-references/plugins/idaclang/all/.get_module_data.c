// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3420
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3420 jmp     cs:off_291F8
//
// Resolved target: get_module_data
// Target address:  0x295B8
// GOT/IAT slot:    0x291F8
// Slot symbol:     off_291F8
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

