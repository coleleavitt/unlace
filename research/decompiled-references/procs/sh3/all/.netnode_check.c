// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5500
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5500 jmp     cs:off_15268
//
// Resolved target: netnode_check
// Target address:  0x16300
// GOT/IAT slot:    0x15268
// Slot symbol:     off_15268
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

