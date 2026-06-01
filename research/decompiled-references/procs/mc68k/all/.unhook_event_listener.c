// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6590
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6590 jmp     cs:off_1D2B0
//
// Resolved target: unhook_event_listener
// Target address:  0x1D7B0
// GOT/IAT slot:    0x1D2B0
// Slot symbol:     off_1D2B0
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

