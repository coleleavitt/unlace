// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA300
// Name:            .has_jump_or_flow_xref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA300 jmp     cs:off_35168
//
// Resolved target: has_jump_or_flow_xref
// Target address:  0x357B8
// GOT/IAT slot:    0x35168
// Slot symbol:     off_35168
// Target type:     <no type info>
// ============================================================

void .has_jump_or_flow_xref(/* see target signature */)
{
    // Tail-call to has_jump_or_flow_xref via GOT/IAT indirection
    return has_jump_or_flow_xref(/* forwarded args */);
}

