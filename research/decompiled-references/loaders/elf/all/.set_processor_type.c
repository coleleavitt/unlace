// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96B0
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x96B0 jmp     cs:off_89340
//
// Resolved target: set_processor_type
// Target address:  0x8C648
// GOT/IAT slot:    0x89340
// Slot symbol:     off_89340
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}

