// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45E0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45E0 jmp     cs:off_282D8
//
// Resolved target: netnode_check
// Target address:  0x29C78
// GOT/IAT slot:    0x282D8
// Slot symbol:     off_282D8
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

