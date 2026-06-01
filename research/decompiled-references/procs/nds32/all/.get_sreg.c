// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8450
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8450 jmp     cs:off_2A210
//
// Resolved target: get_sreg
// Target address:  0x2A780
// GOT/IAT slot:    0x2A210
// Slot symbol:     off_2A210
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

