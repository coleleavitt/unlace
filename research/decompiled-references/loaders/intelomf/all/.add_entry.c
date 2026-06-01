// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1290
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1290 jmp     cs:off_5130
//
// Resolved target: add_entry
// Target address:  0x5388
// GOT/IAT slot:    0x5130
// Slot symbol:     off_5130
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

