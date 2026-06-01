// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4350
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4350 jmp     cs:off_23190
//
// Resolved target: netnode_altval
// Target address:  0x235B0
// GOT/IAT slot:    0x23190
// Slot symbol:     off_23190
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

