// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2430
// Name:            .add_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2430 jmp     cs:off_8200
//
// Resolved target: add_til
// Target address:  0x8478
// GOT/IAT slot:    0x8200
// Slot symbol:     off_8200
// Target type:     <no type info>
// ============================================================

void .add_til(/* see target signature */)
{
    // Tail-call to add_til via GOT/IAT indirection
    return add_til(/* forwarded args */);
}

