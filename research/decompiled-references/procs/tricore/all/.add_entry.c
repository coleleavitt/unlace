// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6880
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6880 jmp     cs:off_24428
//
// Resolved target: add_entry
// Target address:  0x26220
// GOT/IAT slot:    0x24428
// Slot symbol:     off_24428
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

