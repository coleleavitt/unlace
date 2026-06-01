// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9AE0
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9AE0 jmp     cs:off_89558
//
// Resolved target: add_entry
// Target address:  0x8C888
// GOT/IAT slot:    0x89558
// Slot symbol:     off_89558
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

