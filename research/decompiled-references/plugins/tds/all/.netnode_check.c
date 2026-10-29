// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22B0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22B0 jmp     cs:off_A140
//
// Resolved target: netnode_check
// Target address:  0xA378
// GOT/IAT slot:    0xA140
// Slot symbol:     off_A140
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

