// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6030
// Name:            .setup_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6030 jmp     cs:off_24000
//
// Resolved target: setup_selector
// Target address:  0x25DD0
// GOT/IAT slot:    0x24000
// Slot symbol:     off_24000
// Target type:     <no type info>
// ============================================================

void .setup_selector(/* see target signature */)
{
    // Tail-call to setup_selector via GOT/IAT indirection
    return setup_selector(/* forwarded args */);
}

