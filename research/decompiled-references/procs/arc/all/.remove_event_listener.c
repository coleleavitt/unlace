// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8870
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8870 jmp     cs:off_2A420
//
// Resolved target: remove_event_listener
// Target address:  0x2BE48
// GOT/IAT slot:    0x2A420
// Slot symbol:     off_2A420
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

