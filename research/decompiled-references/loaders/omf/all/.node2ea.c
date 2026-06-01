// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30D0
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30D0 jmp     cs:off_14050
//
// Resolved target: node2ea
// Target address:  0x14638
// GOT/IAT slot:    0x14050
// Slot symbol:     off_14050
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

