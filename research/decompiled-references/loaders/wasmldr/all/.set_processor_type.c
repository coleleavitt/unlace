// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21D0
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21D0 jmp     cs:off_150D0
//
// Resolved target: set_processor_type
// Target address:  0x152C0
// GOT/IAT slot:    0x150D0
// Slot symbol:     off_150D0
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}

