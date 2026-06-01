// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20030
// Name:            .setup_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20030 jmp     cs:off_95000
//
// Resolved target: setup_selector
// Target address:  0x95A30
// GOT/IAT slot:    0x95000
// Slot symbol:     off_95000
// Target type:     <no type info>
// ============================================================

void .setup_selector(/* see target signature */)
{
    // Tail-call to setup_selector via GOT/IAT indirection
    return setup_selector(/* forwarded args */);
}

