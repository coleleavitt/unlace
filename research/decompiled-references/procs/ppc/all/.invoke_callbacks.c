// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x201F0
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x201F0 jmp     cs:off_950E0
//
// Resolved target: invoke_callbacks
// Target address:  0x95B10
// GOT/IAT slot:    0x950E0
// Slot symbol:     off_950E0
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

