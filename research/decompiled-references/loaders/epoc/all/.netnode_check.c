// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33C0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33C0 jmp     cs:off_131C8
//
// Resolved target: netnode_check
// Target address:  0x138C0
// GOT/IAT slot:    0x131C8
// Slot symbol:     off_131C8
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

