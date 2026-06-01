// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6A10
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6A10 jmp     cs:off_2F4F0
//
// Resolved target: hook_event_listener
// Target address:  0x2FB80
// GOT/IAT slot:    0x2F4F0
// Slot symbol:     off_2F4F0
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

