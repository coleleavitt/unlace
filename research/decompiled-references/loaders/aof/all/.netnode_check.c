// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2240
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2240 jmp     cs:off_7108
//
// Resolved target: netnode_check
// Target address:  0x72C0
// GOT/IAT slot:    0x7108
// Slot symbol:     off_7108
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

