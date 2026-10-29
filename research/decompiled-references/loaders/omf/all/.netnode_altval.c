// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32D0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32D0 jmp     cs:off_14150
//
// Resolved target: netnode_altval
// Target address:  0x14740
// GOT/IAT slot:    0x14150
// Slot symbol:     off_14150
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

