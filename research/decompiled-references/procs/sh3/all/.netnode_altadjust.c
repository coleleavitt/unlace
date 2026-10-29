// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5380
// Name:            .netnode_altadjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5380 jmp     cs:off_151A8
//
// Resolved target: netnode_altadjust
// Target address:  0x16238
// GOT/IAT slot:    0x151A8
// Slot symbol:     off_151A8
// Target type:     <no type info>
// ============================================================

void .netnode_altadjust(/* see target signature */)
{
    // Tail-call to netnode_altadjust via GOT/IAT indirection
    return netnode_altadjust(/* forwarded args */);
}

