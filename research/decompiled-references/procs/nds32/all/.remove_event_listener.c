// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8770
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8770 jmp     cs:off_2A3A0
//
// Resolved target: remove_event_listener
// Target address:  0x2A928
// GOT/IAT slot:    0x2A3A0
// Slot symbol:     off_2A3A0
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

