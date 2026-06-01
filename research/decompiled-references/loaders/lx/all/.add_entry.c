// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2470
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2470 jmp     cs:off_B220
//
// Resolved target: add_entry
// Target address:  0xB4E0
// GOT/IAT slot:    0xB220
// Slot symbol:     off_B220
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

