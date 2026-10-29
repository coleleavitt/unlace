// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40F0
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40F0 jmp     cs:off_23060
//
// Resolved target: invoke_callbacks
// Target address:  0x23480
// GOT/IAT slot:    0x23060
// Slot symbol:     off_23060
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

