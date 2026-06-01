// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9890
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9890 jmp     cs:off_2E430
//
// Resolved target: netnode_qgetblob
// Target address:  0x2EAB8
// GOT/IAT slot:    0x2E430
// Slot symbol:     off_2E430
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

