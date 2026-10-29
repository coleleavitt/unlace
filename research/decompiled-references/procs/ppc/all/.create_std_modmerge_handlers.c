// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20BE0
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20BE0 jmp     cs:off_955D8
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x96020
// GOT/IAT slot:    0x955D8
// Slot symbol:     off_955D8
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

