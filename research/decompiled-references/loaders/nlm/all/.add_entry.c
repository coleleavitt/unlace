// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2370
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2370 jmp     cs:off_81A0
//
// Resolved target: add_entry
// Target address:  0x8890
// GOT/IAT slot:    0x81A0
// Slot symbol:     off_81A0
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

