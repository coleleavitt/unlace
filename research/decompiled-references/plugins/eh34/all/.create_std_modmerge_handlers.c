// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65E0
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65E0 jmp     cs:off_8D2D8
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x8D890
// GOT/IAT slot:    0x8D2D8
// Slot symbol:     off_8D2D8
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

