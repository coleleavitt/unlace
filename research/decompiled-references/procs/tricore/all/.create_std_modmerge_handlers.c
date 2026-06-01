// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6650
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6650 jmp     cs:off_24310
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x260F0
// GOT/IAT slot:    0x24310
// Slot symbol:     off_24310
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

