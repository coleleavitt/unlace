// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6340
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6340 jmp     cs:off_8D188
//
// Resolved target: netnode_altval
// Target address:  0x8D720
// GOT/IAT slot:    0x8D188
// Slot symbol:     off_8D188
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

