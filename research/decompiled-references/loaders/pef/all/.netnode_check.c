// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2270
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2270 jmp     cs:off_8120
//
// Resolved target: netnode_check
// Target address:  0x8318
// GOT/IAT slot:    0x8120
// Slot symbol:     off_8120
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

