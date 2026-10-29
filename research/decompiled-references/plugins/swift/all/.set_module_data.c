// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43F0
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43F0 jmp     cs:off_281E0
//
// Resolved target: set_module_data
// Target address:  0x29B78
// GOT/IAT slot:    0x281E0
// Slot symbol:     off_281E0
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

