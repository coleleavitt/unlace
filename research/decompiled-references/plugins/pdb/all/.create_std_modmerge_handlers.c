// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D970
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D970 jmp     cs:off_B34A0
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0xB3C58
// GOT/IAT slot:    0xB34A0
// Slot symbol:     off_B34A0
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

