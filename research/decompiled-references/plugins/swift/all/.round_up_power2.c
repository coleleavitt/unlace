// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x48D0
// Name:            .round_up_power2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x48D0 jmp     cs:off_28450
//
// Resolved target: round_up_power2
// Target address:  0x29E10
// GOT/IAT slot:    0x28450
// Slot symbol:     off_28450
// Target type:     <no type info>
// ============================================================

void .round_up_power2(/* see target signature */)
{
    // Tail-call to round_up_power2 via GOT/IAT indirection
    return round_up_power2(/* forwarded args */);
}

