// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16B60
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16B60 jmp     cs:off_4F598
//
// Resolved target: remove_event_listener
// Target address:  0x507E0
// GOT/IAT slot:    0x4F598
// Slot symbol:     off_4F598
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

