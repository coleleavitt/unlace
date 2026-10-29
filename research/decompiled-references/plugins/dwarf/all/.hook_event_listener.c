// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAD10
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAD10 jmp     cs:off_CA670
//
// Resolved target: hook_event_listener
// Target address:  0xD0FD0
// GOT/IAT slot:    0xCA670
// Slot symbol:     off_CA670
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

