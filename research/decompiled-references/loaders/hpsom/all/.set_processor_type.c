// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170 jmp     cs:off_50A0
//
// Resolved target: set_processor_type
// Target address:  0x5240
// GOT/IAT slot:    0x50A0
// Slot symbol:     off_50A0
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}

