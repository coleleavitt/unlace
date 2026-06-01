// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA730
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA730 jmp     cs:off_35380
//
// Resolved target: netnode_check
// Target address:  0x359D8
// GOT/IAT slot:    0x35380
// Slot symbol:     off_35380
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

