// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2270
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2270 jmp     cs:off_A120
//
// Resolved target: set_selector
// Target address:  0xA3D0
// GOT/IAT slot:    0xA120
// Slot symbol:     off_A120
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

