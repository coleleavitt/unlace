// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10E0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10E0 jmp     cs:off_4058
//
// Resolved target: netnode_check
// Target address:  0x4110
// GOT/IAT slot:    0x4058
// Slot symbol:     off_4058
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

