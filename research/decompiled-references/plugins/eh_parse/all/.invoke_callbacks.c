// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6140
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6140 jmp     cs:off_2F088
//
// Resolved target: invoke_callbacks
// Target address:  0x2F6F8
// GOT/IAT slot:    0x2F088
// Slot symbol:     off_2F088
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

