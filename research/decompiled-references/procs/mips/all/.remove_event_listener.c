// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C90
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C90 jmp     cs:off_75630
//
// Resolved target: remove_event_listener
// Target address:  0x75E98
// GOT/IAT slot:    0x75630
// Slot symbol:     off_75630
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

