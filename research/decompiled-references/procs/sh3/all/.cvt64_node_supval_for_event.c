// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5190
// Name:            .cvt64_node_supval_for_event
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5190 jmp     cs:off_150B0
//
// Resolved target: cvt64_node_supval_for_event
// Target address:  0x16140
// GOT/IAT slot:    0x150B0
// Slot symbol:     off_150B0
// Target type:     <no type info>
// ============================================================

void .cvt64_node_supval_for_event(/* see target signature */)
{
    // Tail-call to cvt64_node_supval_for_event via GOT/IAT indirection
    return cvt64_node_supval_for_event(/* forwarded args */);
}

