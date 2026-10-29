// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11E0
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11E0 jmp     cs:off_50D8
//
// Resolved target: set_selector
// Target address:  0x5320
// GOT/IAT slot:    0x50D8
// Slot symbol:     off_50D8
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

