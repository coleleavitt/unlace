// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7320
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7320 jmp     cs:off_19178
//
// Resolved target: netnode_altval
// Target address:  0x196A8
// GOT/IAT slot:    0x19178
// Slot symbol:     off_19178
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

