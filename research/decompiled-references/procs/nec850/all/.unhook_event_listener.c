// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97F0
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x97F0 jmp     cs:off_2E3E0
//
// Resolved target: unhook_event_listener
// Target address:  0x2EA60
// GOT/IAT slot:    0x2E3E0
// Slot symbol:     off_2E3E0
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

