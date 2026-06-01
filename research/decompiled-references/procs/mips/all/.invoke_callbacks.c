// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19150
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19150 jmp     cs:off_75090
//
// Resolved target: invoke_callbacks
// Target address:  0x758E0
// GOT/IAT slot:    0x75090
// Slot symbol:     off_75090
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

