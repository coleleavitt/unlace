// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3550
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3550 jmp     cs:off_28290
//
// Resolved target: set_selector
// Target address:  0x28740
// GOT/IAT slot:    0x28290
// Slot symbol:     off_28290
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

