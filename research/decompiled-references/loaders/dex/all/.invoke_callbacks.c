// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3140
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3140 jmp     cs:off_28088
//
// Resolved target: invoke_callbacks
// Target address:  0x28538
// GOT/IAT slot:    0x28088
// Slot symbol:     off_28088
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

