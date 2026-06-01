// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6980
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6980 jmp     cs:off_2F4A8
//
// Resolved target: remove_event_listener
// Target address:  0x2FB38
// GOT/IAT slot:    0x2F4A8
// Slot symbol:     off_2F4A8
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

