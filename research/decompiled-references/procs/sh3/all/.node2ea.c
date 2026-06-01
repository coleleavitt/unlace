// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x50C0
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x50C0 jmp     cs:off_15048
//
// Resolved target: node2ea
// Target address:  0x160D8
// GOT/IAT slot:    0x15048
// Slot symbol:     off_15048
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

