// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1280
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1280 jmp     cs:off_5128
//
// Resolved target: add_entry
// Target address:  0x52D0
// GOT/IAT slot:    0x5128
// Slot symbol:     off_5128
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

