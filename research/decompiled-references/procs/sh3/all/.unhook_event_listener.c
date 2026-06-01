// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55B0
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x55B0 jmp     cs:off_152C0
//
// Resolved target: unhook_event_listener
// Target address:  0x16360
// GOT/IAT slot:    0x152C0
// Slot symbol:     off_152C0
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

