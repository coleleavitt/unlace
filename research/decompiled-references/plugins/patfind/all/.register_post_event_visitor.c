// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2040
// Name:            .register_post_event_visitor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2040 jmp     cs:off_13008
//
// Resolved target: register_post_event_visitor
// Target address:  0x13298
// GOT/IAT slot:    0x13008
// Slot symbol:     off_13008
// Target type:     <no type info>
// ============================================================

void .register_post_event_visitor(/* see target signature */)
{
    // Tail-call to register_post_event_visitor via GOT/IAT indirection
    return register_post_event_visitor(/* forwarded args */);
}

