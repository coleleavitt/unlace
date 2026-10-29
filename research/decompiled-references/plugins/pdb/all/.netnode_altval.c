// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D4D0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D4D0 jmp     cs:off_B3250
//
// Resolved target: netnode_altval
// Target address:  0xB39F0
// GOT/IAT slot:    0xB3250
// Slot symbol:     off_B3250
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

