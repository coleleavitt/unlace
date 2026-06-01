// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93E0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93E0 jmp     cs:off_2E1D8
//
// Resolved target: netnode_altval
// Target address:  0x2E848
// GOT/IAT slot:    0x2E1D8
// Slot symbol:     off_2E1D8
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

