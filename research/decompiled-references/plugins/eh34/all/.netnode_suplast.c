// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65F0
// Name:            .netnode_suplast
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65F0 jmp     cs:off_8D2E0
//
// Resolved target: netnode_suplast
// Target address:  0x8D898
// GOT/IAT slot:    0x8D2E0
// Slot symbol:     off_8D2E0
// Target type:     <no type info>
// ============================================================

void .netnode_suplast(/* see target signature */)
{
    // Tail-call to netnode_suplast via GOT/IAT indirection
    return netnode_suplast(/* forwarded args */);
}

