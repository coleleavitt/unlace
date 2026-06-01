// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6820
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6820 jmp     cs:off_243F8
//
// Resolved target: hook_event_listener
// Target address:  0x261E8
// GOT/IAT slot:    0x243F8
// Slot symbol:     off_243F8
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

