// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2310
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2310 jmp     cs:off_7170
//
// Resolved target: add_entry
// Target address:  0x7330
// GOT/IAT slot:    0x7170
// Slot symbol:     off_7170
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

