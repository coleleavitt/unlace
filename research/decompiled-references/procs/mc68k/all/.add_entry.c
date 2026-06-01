// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6730
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6730 jmp     cs:off_1D380
//
// Resolved target: add_entry
// Target address:  0x1D890
// GOT/IAT slot:    0x1D380
// Slot symbol:     off_1D380
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

