// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7730
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7730 jmp     cs:off_19380
//
// Resolved target: remove_event_listener
// Target address:  0x198C8
// GOT/IAT slot:    0x19380
// Slot symbol:     off_19380
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

