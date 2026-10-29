// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x83A0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x83A0 jmp     cs:off_2A1B8
//
// Resolved target: netnode_altval
// Target address:  0x2BBC8
// GOT/IAT slot:    0x2A1B8
// Slot symbol:     off_2A1B8
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

