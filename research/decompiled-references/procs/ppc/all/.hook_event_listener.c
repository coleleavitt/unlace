// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20ED0
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20ED0 jmp     cs:off_95750
//
// Resolved target: hook_event_listener
// Target address:  0x961A0
// GOT/IAT slot:    0x95750
// Slot symbol:     off_95750
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

