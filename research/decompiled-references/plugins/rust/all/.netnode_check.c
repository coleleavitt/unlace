// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2290
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2290 jmp     cs:off_A130
//
// Resolved target: netnode_check
// Target address:  0xB408
// GOT/IAT slot:    0xA130
// Slot symbol:     off_A130
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

