// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4100
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4100 jmp     cs:off_28068
//
// Resolved target: clr_module_data
// Target address:  0x29A00
// GOT/IAT slot:    0x28068
// Slot symbol:     off_28068
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

