// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19130
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19130 jmp     cs:off_75080
//
// Resolved target: clr_module_data
// Target address:  0x758D0
// GOT/IAT slot:    0x75080
// Slot symbol:     off_75080
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

