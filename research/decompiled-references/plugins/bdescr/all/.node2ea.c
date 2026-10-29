// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2050
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2050 jmp     cs:off_7010
//
// Resolved target: node2ea
// Target address:  0x7140
// GOT/IAT slot:    0x7010
// Slot symbol:     off_7010
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

