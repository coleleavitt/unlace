// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA540
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA540 jmp     cs:off_CA288
//
// Resolved target: netnode_altval
// Target address:  0xD0BC0
// GOT/IAT slot:    0xCA288
// Slot symbol:     off_CA288
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

