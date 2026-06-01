// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3490
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3490 jmp     cs:off_13230
//
// Resolved target: netnode_check
// Target address:  0x135B8
// GOT/IAT slot:    0x13230
// Slot symbol:     off_13230
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

