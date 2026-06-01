// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72C0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72C0 jmp     cs:off_26148
//
// Resolved target: netnode_check
// Target address:  0x26408
// GOT/IAT slot:    0x26148
// Slot symbol:     off_26148
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

