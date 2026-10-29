// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA7B0
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA7B0 jmp     cs:off_353C0
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x35A20
// GOT/IAT slot:    0x353C0
// Slot symbol:     off_353C0
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

