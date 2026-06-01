// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DB90
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DB90 jmp     cs:off_B35B0
//
// Resolved target: hook_event_listener
// Target address:  0xB3D80
// GOT/IAT slot:    0xB35B0
// Slot symbol:     off_B35B0
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

