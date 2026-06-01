// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7250
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7250 jmp     cs:off_26110
//
// Resolved target: get_sreg
// Target address:  0x263C8
// GOT/IAT slot:    0x26110
// Slot symbol:     off_26110
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

