// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9760
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9760 jmp     cs:off_2E398
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x2EA18
// GOT/IAT slot:    0x2E398
// Slot symbol:     off_2E398
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

