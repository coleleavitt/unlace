// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22A0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22A0 jmp     cs:off_B138
//
// Resolved target: netnode_altval
// Target address:  0xB5D0
// GOT/IAT slot:    0xB138
// Slot symbol:     off_B138
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

