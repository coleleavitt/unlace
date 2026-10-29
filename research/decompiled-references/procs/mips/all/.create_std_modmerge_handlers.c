// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A60
// Name:            .create_std_modmerge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A60 jmp     cs:off_75518
//
// Resolved target: create_std_modmerge_handlers
// Target address:  0x75D78
// GOT/IAT slot:    0x75518
// Slot symbol:     off_75518
// Target type:     <no type info>
// ============================================================

void .create_std_modmerge_handlers(/* see target signature */)
{
    // Tail-call to create_std_modmerge_handlers via GOT/IAT indirection
    return create_std_modmerge_handlers(/* forwarded args */);
}

