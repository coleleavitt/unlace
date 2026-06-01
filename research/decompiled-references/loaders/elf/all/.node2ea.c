// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9120
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9120 jmp     cs:off_89078
//
// Resolved target: node2ea
// Target address:  0x8C378
// GOT/IAT slot:    0x89078
// Slot symbol:     off_89078
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

