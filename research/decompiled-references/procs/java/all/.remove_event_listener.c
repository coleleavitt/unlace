// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x67B0
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x67B0 jmp     cs:off_2D3C0
//
// Resolved target: remove_event_listener
// Target address:  0x2D8E0
// GOT/IAT slot:    0x2D3C0
// Slot symbol:     off_2D3C0
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

