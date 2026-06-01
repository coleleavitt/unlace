// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA120
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA120 jmp     cs:off_35078
//
// Resolved target: clr_module_data
// Target address:  0x356C8
// GOT/IAT slot:    0x35078
// Slot symbol:     off_35078
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

