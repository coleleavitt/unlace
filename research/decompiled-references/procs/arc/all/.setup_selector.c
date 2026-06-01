// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8030
// Name:            .setup_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8030 jmp     cs:off_2A000
//
// Resolved target: setup_selector
// Target address:  0x2BA10
// GOT/IAT slot:    0x2A000
// Slot symbol:     off_2A000
// Target type:     <no type info>
// ============================================================

void .setup_selector(/* see target signature */)
{
    // Tail-call to setup_selector via GOT/IAT indirection
    return setup_selector(/* forwarded args */);
}

