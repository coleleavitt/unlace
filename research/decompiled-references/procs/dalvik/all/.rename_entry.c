// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52D0
// Name:            .rename_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x52D0 jmp     cs:off_1A150
//
// Resolved target: rename_entry
// Target address:  0x1A4D8
// GOT/IAT slot:    0x1A150
// Slot symbol:     off_1A150
// Target type:     <no type info>
// ============================================================

void .rename_entry(/* see target signature */)
{
    // Tail-call to rename_entry via GOT/IAT indirection
    return rename_entry(/* forwarded args */);
}

