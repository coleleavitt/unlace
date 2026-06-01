// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2240
// Name:            .rename_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2240 jmp     cs:off_B108
//
// Resolved target: rename_entry
// Target address:  0xB3B0
// GOT/IAT slot:    0xB108
// Slot symbol:     off_B108
// Target type:     <no type info>
// ============================================================

void .rename_entry(/* see target signature */)
{
    // Tail-call to rename_entry via GOT/IAT indirection
    return rename_entry(/* forwarded args */);
}

