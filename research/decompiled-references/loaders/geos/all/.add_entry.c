// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2420
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2420 jmp     cs:off_81F8
//
// Resolved target: add_entry
// Target address:  0x8470
// GOT/IAT slot:    0x81F8
// Slot symbol:     off_81F8
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

