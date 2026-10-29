// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9590
// Name:            .get_sreg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9590 jmp     cs:off_2E2B0
//
// Resolved target: get_sreg
// Target address:  0x2E920
// GOT/IAT slot:    0x2E2B0
// Slot symbol:     off_2E2B0
// Target type:     <no type info>
// ============================================================

void .get_sreg(/* see target signature */)
{
    // Tail-call to get_sreg via GOT/IAT indirection
    return get_sreg(/* forwarded args */);
}

