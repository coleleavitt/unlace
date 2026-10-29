// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA450
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA450 jmp     cs:off_35210
//
// Resolved target: netnode_altval
// Target address:  0x35860
// GOT/IAT slot:    0x35210
// Slot symbol:     off_35210
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

