// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D280
// Name:            .cvt64_node_supval_for_event
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D280 jmp     cs:off_B3128
//
// Resolved target: cvt64_node_supval_for_event
// Target address:  0xB38B0
// GOT/IAT slot:    0xB3128
// Slot symbol:     off_B3128
// Target type:     <no type info>
// ============================================================

void .cvt64_node_supval_for_event(/* see target signature */)
{
    // Tail-call to cvt64_node_supval_for_event via GOT/IAT indirection
    return cvt64_node_supval_for_event(/* forwarded args */);
}

