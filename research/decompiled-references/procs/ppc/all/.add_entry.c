// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F60
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F60 jmp     cs:off_95798
//
// Resolved target: add_entry
// Target address:  0x961F0
// GOT/IAT slot:    0x95798
// Slot symbol:     off_95798
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

