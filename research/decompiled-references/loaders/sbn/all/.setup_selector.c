// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1030
// Name:            .setup_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1030 jmp     cs:off_4000
//
// Resolved target: setup_selector
// Target address:  0x40D8
// GOT/IAT slot:    0x4000
// Slot symbol:     off_4000
// Target type:     <no type info>
// ============================================================

void .setup_selector(/* see target signature */)
{
    // Tail-call to setup_selector via GOT/IAT indirection
    return setup_selector(/* forwarded args */);
}

