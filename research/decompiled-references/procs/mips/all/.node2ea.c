// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x190E0
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x190E0 jmp     cs:off_75058
//
// Resolved target: node2ea
// Target address:  0x758A8
// GOT/IAT slot:    0x75058
// Slot symbol:     off_75058
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

