// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70B0
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70B0 jmp     cs:off_19040
//
// Resolved target: clr_module_data
// Target address:  0x19570
// GOT/IAT slot:    0x19040
// Slot symbol:     off_19040
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

