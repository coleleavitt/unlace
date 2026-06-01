// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x75C0
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x75C0 jmp     cs:off_192C8
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x19808
// GOT/IAT slot:    0x192C8
// Slot symbol:     off_192C8
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

