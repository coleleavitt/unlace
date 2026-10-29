// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3300
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3300 jmp     cs:off_28168
//
// Resolved target: netnode_altval
// Target address:  0x28618
// GOT/IAT slot:    0x28168
// Slot symbol:     off_28168
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

