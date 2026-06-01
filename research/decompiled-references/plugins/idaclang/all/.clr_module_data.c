// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30B0
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30B0 jmp     cs:off_29040
//
// Resolved target: clr_module_data
// Target address:  0x293F0
// GOT/IAT slot:    0x29040
// Slot symbol:     off_29040
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

