// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x53F0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x53F0 jmp     cs:off_1A1E0
//
// Resolved target: netnode_check
// Target address:  0x1A570
// GOT/IAT slot:    0x1A1E0
// Slot symbol:     off_1A1E0
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

