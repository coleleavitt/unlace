// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180 jmp     cs:off_60A8
//
// Resolved target: set_processor_type
// Target address:  0x6230
// GOT/IAT slot:    0x60A8
// Slot symbol:     off_60A8
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}

