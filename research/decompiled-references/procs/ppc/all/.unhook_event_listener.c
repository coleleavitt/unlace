// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20CA0
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20CA0 jmp     cs:off_95638
//
// Resolved target: unhook_event_listener
// Target address:  0x96080
// GOT/IAT slot:    0x95638
// Slot symbol:     off_95638
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

