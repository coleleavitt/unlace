// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34E0
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34E0 jmp     cs:off_13258
//
// Resolved target: add_entry
// Target address:  0x13968
// GOT/IAT slot:    0x13258
// Slot symbol:     off_13258
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

