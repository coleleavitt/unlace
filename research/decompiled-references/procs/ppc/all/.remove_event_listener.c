// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E50
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E50 jmp     cs:off_95710
//
// Resolved target: remove_event_listener
// Target address:  0x96160
// GOT/IAT slot:    0x95710
// Slot symbol:     off_95710
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

