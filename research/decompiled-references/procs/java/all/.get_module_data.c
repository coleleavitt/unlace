// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6630
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6630 jmp     cs:off_2D300
//
// Resolved target: get_module_data
// Target address:  0x2D810
// GOT/IAT slot:    0x2D300
// Slot symbol:     off_2D300
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

