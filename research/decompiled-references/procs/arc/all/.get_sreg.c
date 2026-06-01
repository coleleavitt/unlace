// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8540
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8540 jmp     cs:off_2A288
//
// Resolved target: get_sreg
// Target address:  0x2BC98
// GOT/IAT slot:    0x2A288
// Slot symbol:     off_2A288
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

