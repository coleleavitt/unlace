// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8600
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8600 jmp     cs:off_2A2E8
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x2A868
// GOT/IAT slot:    0x2A2E8
// Slot symbol:     off_2A2E8
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

