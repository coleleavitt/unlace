// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B60
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B60 jmp     cs:off_75598
//
// Resolved target: get_auto_state
// Target address:  0x75DF8
// GOT/IAT slot:    0x75598
// Slot symbol:     off_75598
// Target type:     <no type info>
// ============================================================

void .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

