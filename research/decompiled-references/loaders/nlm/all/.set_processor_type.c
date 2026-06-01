// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_80D8
//
// Resolved target: set_processor_type
// Target address:  0x87B8
// GOT/IAT slot:    0x80D8
// Slot symbol:     off_80D8
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}

