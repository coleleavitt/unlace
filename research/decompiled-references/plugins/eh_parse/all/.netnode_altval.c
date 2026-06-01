// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63E0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63E0 jmp     cs:off_2F1D8
//
// Resolved target: netnode_altval
// Target address:  0x2F848
// GOT/IAT slot:    0x2F1D8
// Slot symbol:     off_2F1D8
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

