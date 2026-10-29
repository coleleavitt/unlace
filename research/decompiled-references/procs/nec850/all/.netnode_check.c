// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96D0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x96D0 jmp     cs:off_2E350
//
// Resolved target: netnode_check
// Target address:  0x2E9C8
// GOT/IAT slot:    0x2E350
// Slot symbol:     off_2E350
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

