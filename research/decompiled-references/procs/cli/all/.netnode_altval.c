// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31A0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31A0 jmp     cs:off_1A0B8
//
// Resolved target: netnode_altval
// Target address:  0x1A370
// GOT/IAT slot:    0x1A0B8
// Slot symbol:     off_1A0B8
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

