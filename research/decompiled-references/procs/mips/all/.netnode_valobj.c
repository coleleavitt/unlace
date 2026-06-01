// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19960
// Name:            .netnode_valobj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19960 jmp     cs:off_75498
//
// Resolved target: netnode_valobj
// Target address:  0x75CF0
// GOT/IAT slot:    0x75498
// Slot symbol:     off_75498
// Target type:     <no type info>
// ============================================================

void .netnode_valobj(/* see target signature */)
{
    // Tail-call to netnode_valobj via GOT/IAT indirection
    return netnode_valobj(/* forwarded args */);
}

