// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3420
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3420 jmp     cs:off_141F8
//
// Resolved target: set_processor_type
// Target address:  0x147E8
// GOT/IAT slot:    0x141F8
// Slot symbol:     off_141F8
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}

