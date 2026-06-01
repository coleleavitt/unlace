// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4470
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4470 jmp     cs:off_1F220
//
// Resolved target: hook_event_listener
// Target address:  0x1F4F0
// GOT/IAT slot:    0x1F220
// Slot symbol:     off_1F220
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

