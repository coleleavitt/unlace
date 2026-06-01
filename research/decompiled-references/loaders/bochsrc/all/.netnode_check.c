// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150 jmp     cs:off_4090
//
// Resolved target: netnode_check
// Target address:  0x51D8
// GOT/IAT slot:    0x4090
// Slot symbol:     off_4090
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

