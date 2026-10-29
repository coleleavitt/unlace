// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3530
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3530 jmp     cs:off_29280
//
// Resolved target: hook_event_listener
// Target address:  0x29648
// GOT/IAT slot:    0x29280
// Slot symbol:     off_29280
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

