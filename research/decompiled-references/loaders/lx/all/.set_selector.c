// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22F0
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22F0 jmp     cs:off_B160
//
// Resolved target: set_selector
// Target address:  0xB408
// GOT/IAT slot:    0xB160
// Slot symbol:     off_B160
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

