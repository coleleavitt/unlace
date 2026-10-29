// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4830
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4830 jmp     cs:off_28400
//
// Resolved target: hook_event_listener
// Target address:  0x29DB8
// GOT/IAT slot:    0x28400
// Slot symbol:     off_28400
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

