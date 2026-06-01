// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6540
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6540 jmp     cs:off_1D288
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x1D788
// GOT/IAT slot:    0x1D288
// Slot symbol:     off_1D288
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

