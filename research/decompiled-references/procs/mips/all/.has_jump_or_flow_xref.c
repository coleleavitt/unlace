// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193F0
// Name:            .has_jump_or_flow_xref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x193F0 jmp     cs:off_751E0
//
// Resolved target: has_jump_or_flow_xref
// Target address:  0x75A30
// GOT/IAT slot:    0x751E0
// Slot symbol:     off_751E0
// Target type:     <no type info>
// ============================================================

void .has_jump_or_flow_xref(/* see target signature */)
{
    // Tail-call to has_jump_or_flow_xref via GOT/IAT indirection
    return has_jump_or_flow_xref(/* forwarded args */);
}

