// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7060
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7060 jmp     cs:off_26018
//
// Resolved target: node2ea
// Target address:  0x262D0
// GOT/IAT slot:    0x26018
// Slot symbol:     off_26018
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

