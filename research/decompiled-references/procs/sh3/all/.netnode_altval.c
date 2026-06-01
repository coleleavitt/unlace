// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5300
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5300 jmp     cs:off_15168
//
// Resolved target: netnode_altval
// Target address:  0x161F8
// GOT/IAT slot:    0x15168
// Slot symbol:     off_15168
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

