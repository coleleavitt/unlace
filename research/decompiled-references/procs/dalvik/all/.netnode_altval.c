// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5260
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5260 jmp     cs:off_1A118
//
// Resolved target: netnode_altval
// Target address:  0x1A4A0
// GOT/IAT slot:    0x1A118
// Slot symbol:     off_1A118
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

