// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2060
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2060 jmp     cs:off_7018
//
// Resolved target: invoke_callbacks
// Target address:  0x7148
// GOT/IAT slot:    0x7018
// Slot symbol:     off_7018
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

