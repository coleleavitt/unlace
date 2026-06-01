// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2250
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2250 jmp     cs:off_8110
//
// Resolved target: set_selector
// Target address:  0x8300
// GOT/IAT slot:    0x8110
// Slot symbol:     off_8110
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

