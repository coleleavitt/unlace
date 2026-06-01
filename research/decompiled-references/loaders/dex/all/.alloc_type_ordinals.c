// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30B0
// Name:            .alloc_type_ordinals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30B0 jmp     cs:off_28040
//
// Resolved target: alloc_type_ordinals
// Target address:  0x284F0
// GOT/IAT slot:    0x28040
// Slot symbol:     off_28040
// Target type:     <no type info>
// ============================================================

void .alloc_type_ordinals(/* see target signature */)
{
    // Tail-call to alloc_type_ordinals via GOT/IAT indirection
    return alloc_type_ordinals(/* forwarded args */);
}

