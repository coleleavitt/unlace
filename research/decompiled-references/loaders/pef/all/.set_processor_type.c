// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2230 jmp     cs:off_8100
//
// Resolved target: set_processor_type
// Target address:  0x82F0
// GOT/IAT slot:    0x8100
// Slot symbol:     off_8100
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}

