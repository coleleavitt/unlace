// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1240
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1240 jmp     cs:off_5108
//
// Resolved target: add_entry
// Target address:  0x5278
// GOT/IAT slot:    0x5108
// Slot symbol:     off_5108
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

