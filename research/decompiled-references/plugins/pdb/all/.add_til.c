// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DCC0
// Name:            .add_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DCC0 jmp     cs:off_B3648
//
// Resolved target: add_til
// Target address:  0xB3E28
// GOT/IAT slot:    0xB3648
// Slot symbol:     off_B3648
// Target type:     <no type info>
// ============================================================

void .add_til(/* see target signature */)
{
    // Tail-call to add_til via GOT/IAT indirection
    return add_til(/* forwarded args */);
}

