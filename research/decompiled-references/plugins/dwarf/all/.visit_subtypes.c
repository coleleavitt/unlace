// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA480
// Name:            .visit_subtypes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA480 jmp     cs:off_CA228
//
// Resolved target: visit_subtypes
// Target address:  0xD0B60
// GOT/IAT slot:    0xCA228
// Slot symbol:     off_CA228
// Target type:     <no type info>
// ============================================================

void .visit_subtypes(/* see target signature */)
{
    // Tail-call to visit_subtypes via GOT/IAT indirection
    return visit_subtypes(/* forwarded args */);
}

