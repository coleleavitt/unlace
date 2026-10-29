// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19910
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19910 jmp     cs:off_75470
//
// Resolved target: set_selector
// Target address:  0x75CC0
// GOT/IAT slot:    0x75470
// Slot symbol:     off_75470
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

