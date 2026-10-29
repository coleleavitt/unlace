// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A0
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A0 jmp     cs:off_8038
//
// Resolved target: node2ea
// Target address:  0x8298
// GOT/IAT slot:    0x8038
// Slot symbol:     off_8038
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

