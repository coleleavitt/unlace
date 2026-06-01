// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x206A0
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x206A0 jmp     cs:off_95338
//
// Resolved target: set_module_data
// Target address:  0x95D70
// GOT/IAT slot:    0x95338
// Slot symbol:     off_95338
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

