// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3490
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3490 jmp     cs:off_14230
//
// Resolved target: netnode_check
// Target address:  0x14830
// GOT/IAT slot:    0x14230
// Slot symbol:     off_14230
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

