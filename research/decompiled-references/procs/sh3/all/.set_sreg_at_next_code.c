// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5100
// Name:            .set_sreg_at_next_code
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5100 jmp     cs:off_15068
//
// Resolved target: set_sreg_at_next_code
// Target address:  0x160F8
// GOT/IAT slot:    0x15068
// Slot symbol:     off_15068
// Target type:     <no type info>
// ============================================================

void .set_sreg_at_next_code(/* see target signature */)
{
    // Tail-call to set_sreg_at_next_code via GOT/IAT indirection
    return set_sreg_at_next_code(/* forwarded args */);
}

