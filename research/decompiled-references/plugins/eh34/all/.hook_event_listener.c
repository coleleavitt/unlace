// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6710
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6710 jmp     cs:off_8D370
//
// Resolved target: hook_event_listener
// Target address:  0x8D930
// GOT/IAT slot:    0x8D370
// Slot symbol:     off_8D370
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

