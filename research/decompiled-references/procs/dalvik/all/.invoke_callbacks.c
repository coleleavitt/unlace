// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x50F0
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x50F0 jmp     cs:off_1A060
//
// Resolved target: invoke_callbacks
// Target address:  0x1A3E0
// GOT/IAT slot:    0x1A060
// Slot symbol:     off_1A060
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

