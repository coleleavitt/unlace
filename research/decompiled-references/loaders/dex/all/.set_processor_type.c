// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34F0
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34F0 jmp     cs:off_28260
//
// Resolved target: set_processor_type
// Target address:  0x28710
// GOT/IAT slot:    0x28260
// Slot symbol:     off_28260
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}

