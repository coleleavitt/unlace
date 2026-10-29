// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73D0
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73D0 jmp     cs:off_1D1D0
//
// Resolved target: remove_event_listener
// Target address:  0x1D518
// GOT/IAT slot:    0x1D1D0
// Slot symbol:     off_1D1D0
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

