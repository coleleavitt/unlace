// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3360
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3360 jmp     cs:off_13198
//
// Resolved target: set_processor_type
// Target address:  0x13888
// GOT/IAT slot:    0x13198
// Slot symbol:     off_13198
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}

