// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30B0
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30B0 jmp     cs:off_13040
//
// Resolved target: invoke_callbacks
// Target address:  0x133B8
// GOT/IAT slot:    0x13040
// Slot symbol:     off_13040
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

