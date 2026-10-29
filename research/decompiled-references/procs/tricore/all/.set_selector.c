// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65B0
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65B0 jmp     cs:off_242C0
//
// Resolved target: set_selector
// Target address:  0x26090
// GOT/IAT slot:    0x242C0
// Slot symbol:     off_242C0
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

