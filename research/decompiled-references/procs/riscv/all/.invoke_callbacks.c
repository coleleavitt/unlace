// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA140
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA140 jmp     cs:off_35088
//
// Resolved target: invoke_callbacks
// Target address:  0x356D8
// GOT/IAT slot:    0x35088
// Slot symbol:     off_35088
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

