// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1290
// Name:            .add_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1290 jmp     cs:off_5130
//
// Resolved target: add_til
// Target address:  0x52D8
// GOT/IAT slot:    0x5130
// Slot symbol:     off_5130
// Target type:     <no type info>
// ============================================================

void .add_til(/* see target signature */)
{
    // Tail-call to add_til via GOT/IAT indirection
    return add_til(/* forwarded args */);
}

