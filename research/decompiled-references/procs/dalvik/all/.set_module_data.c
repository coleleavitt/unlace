// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5270
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5270 jmp     cs:off_1A120
//
// Resolved target: set_module_data
// Target address:  0x1A4A8
// GOT/IAT slot:    0x1A120
// Slot symbol:     off_1A120
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

