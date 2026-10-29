// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D0A0
// Name:            .alloc_type_ordinals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D0A0 jmp     cs:off_B3038
//
// Resolved target: alloc_type_ordinals
// Target address:  0xB37A8
// GOT/IAT slot:    0xB3038
// Slot symbol:     off_B3038
// Target type:     <no type info>
// ============================================================

void .alloc_type_ordinals(/* see target signature */)
{
    // Tail-call to alloc_type_ordinals via GOT/IAT indirection
    return alloc_type_ordinals(/* forwarded args */);
}

