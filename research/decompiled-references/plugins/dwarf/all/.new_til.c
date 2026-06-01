// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA940
// Name:            .new_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA940 jmp     cs:off_CA488
//
// Resolved target: new_til
// Target address:  0xD0DD0
// GOT/IAT slot:    0xCA488
// Slot symbol:     off_CA488
// Target type:     <no type info>
// ============================================================

void .new_til(/* see target signature */)
{
    // Tail-call to new_til via GOT/IAT indirection
    return new_til(/* forwarded args */);
}

