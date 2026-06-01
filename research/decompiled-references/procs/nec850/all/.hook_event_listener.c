// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9990
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9990 jmp     cs:off_2E4B0
//
// Resolved target: hook_event_listener
// Target address:  0x2EB38
// GOT/IAT slot:    0x2E4B0
// Slot symbol:     off_2E4B0
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

