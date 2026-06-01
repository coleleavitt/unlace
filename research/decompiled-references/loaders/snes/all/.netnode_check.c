// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160 jmp     cs:off_7098
//
// Resolved target: netnode_check
// Target address:  0x7190
// GOT/IAT slot:    0x7098
// Slot symbol:     off_7098
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

