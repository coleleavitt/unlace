// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60E0
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60E0 jmp     cs:off_1D058
//
// Resolved target: node2ea
// Target address:  0x1D548
// GOT/IAT slot:    0x1D058
// Slot symbol:     off_1D058
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

