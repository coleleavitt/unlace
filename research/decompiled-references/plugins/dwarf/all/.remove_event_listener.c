// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAC90
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAC90 jmp     cs:off_CA630
//
// Resolved target: remove_event_listener
// Target address:  0xD0F90
// GOT/IAT slot:    0xCA630
// Slot symbol:     off_CA630
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

