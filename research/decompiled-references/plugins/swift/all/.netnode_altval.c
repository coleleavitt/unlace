// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43D0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43D0 jmp     cs:off_281D0
//
// Resolved target: netnode_altval
// Target address:  0x29B68
// GOT/IAT slot:    0x281D0
// Slot symbol:     off_281D0
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

