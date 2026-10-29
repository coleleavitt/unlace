// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7550
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7550 jmp     cs:off_19290
//
// Resolved target: netnode_check
// Target address:  0x197C8
// GOT/IAT slot:    0x19290
// Slot symbol:     off_19290
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

