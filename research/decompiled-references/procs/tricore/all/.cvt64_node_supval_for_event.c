// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6210
// Name:            .cvt64_node_supval_for_event
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6210 jmp     cs:off_240F0
//
// Resolved target: cvt64_node_supval_for_event
// Target address:  0x25EC0
// GOT/IAT slot:    0x240F0
// Slot symbol:     off_240F0
// Target type:     <no type info>
// ============================================================

void .cvt64_node_supval_for_event(/* see target signature */)
{
    // Tail-call to cvt64_node_supval_for_event via GOT/IAT indirection
    return cvt64_node_supval_for_event(/* forwarded args */);
}

