// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x56F0
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x56F0 jmp     cs:off_15360
//
// Resolved target: hook_event_listener
// Target address:  0x16408
// GOT/IAT slot:    0x15360
// Slot symbol:     off_15360
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

