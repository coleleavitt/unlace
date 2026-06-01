// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93D0
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93D0 jmp     cs:off_261D0
//
// Resolved target: remove_event_listener
// Target address:  0x264F8
// GOT/IAT slot:    0x261D0
// Slot symbol:     off_261D0
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

