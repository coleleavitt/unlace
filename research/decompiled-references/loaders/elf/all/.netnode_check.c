// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9780
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9780 jmp     cs:off_893A8
//
// Resolved target: netnode_check
// Target address:  0x8C6C0
// GOT/IAT slot:    0x893A8
// Slot symbol:     off_893A8
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

