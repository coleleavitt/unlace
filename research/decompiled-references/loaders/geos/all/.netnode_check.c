// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2300
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2300 jmp     cs:off_8168
//
// Resolved target: netnode_check
// Target address:  0x83D0
// GOT/IAT slot:    0x8168
// Slot symbol:     off_8168
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

