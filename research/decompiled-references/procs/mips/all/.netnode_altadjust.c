// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19600
// Name:            .netnode_altadjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19600 jmp     cs:off_752E8
//
// Resolved target: netnode_altadjust
// Target address:  0x75B38
// GOT/IAT slot:    0x752E8
// Slot symbol:     off_752E8
// Target type:     <no type info>
// ============================================================

void .netnode_altadjust(/* see target signature */)
{
    // Tail-call to netnode_altadjust via GOT/IAT indirection
    return netnode_altadjust(/* forwarded args */);
}

