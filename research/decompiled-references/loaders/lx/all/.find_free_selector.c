// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23D0
// Name:            .find_free_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23D0 jmp     cs:off_B1D0
//
// Resolved target: find_free_selector
// Target address:  0xB490
// GOT/IAT slot:    0xB1D0
// Slot symbol:     off_B1D0
// Target type:     <no type info>
// ============================================================

void .find_free_selector(/* see target signature */)
{
    // Tail-call to find_free_selector via GOT/IAT indirection
    return find_free_selector(/* forwarded args */);
}

