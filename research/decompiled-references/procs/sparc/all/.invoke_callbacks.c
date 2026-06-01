// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70C0
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70C0 jmp     cs:off_19048
//
// Resolved target: invoke_callbacks
// Target address:  0x19578
// GOT/IAT slot:    0x19048
// Slot symbol:     off_19048
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

