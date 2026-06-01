// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B20
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B20 jmp     cs:off_75578
//
// Resolved target: unhook_event_listener
// Target address:  0x75DD8
// GOT/IAT slot:    0x75578
// Slot symbol:     off_75578
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

